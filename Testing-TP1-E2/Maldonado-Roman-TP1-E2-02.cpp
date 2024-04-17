#include <iostream>
#include <cassert>
using namespace std;

int areaA(float base, float altura){
    float aux;

    if(base <= 0){
        throw "no puedes obtener el area de un triangulo cuya Base es 0 o un numero negativo!";
    }
    else if (altura <= 0){
        throw "no puedes obtener el area de un triangulo cuya Altura es 0 o un numero negativo!";
    }

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
        float area = areaA(base, altura);
        cout << "> El area del triangulo es de: " << area << endl; 
    }
    catch(const char *mensaje){
        cout << "> Error: " << mensaje << endl;
    }
    
    return 0;
}
