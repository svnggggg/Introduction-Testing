#include <iostream>

using namespace std;

int areaA(float base, float altura){
    float aux;

    aux = (base * altura) / 2;
    return aux;
}

int main() {
    float base, altura;

    cout << "> Ingresa la Base del triangulo: " << endl;
    cin >> base;

    cout << "> Ingresa la altura del triangulo: " << endl;
    cin >> altura;

    try{
        if(base <= 0){
            throw "su entrada es invalida, puede que estes ingresando un numero negativo o 0 como 'Base' o en ambos casos!";
            return 1;
        }
        else if (altura <= 0){
            throw "su entrada es invalida, puede que estes ingresando un numero negativo o 0 como 'Area' o en ambos casos!";
            return 1;
        }
        if(cin.fail()){
            cin.clear(); 
            throw "su entrada es invalida!";
            return 1;
        }

        float area = areaA(base, altura);
        cout << "> El area del triangulo es de: " << area << endl; 
    }
    catch(const char *mensaje){
        cout << "> Error: " << mensaje << endl;
    }
    
    return 0;
}
