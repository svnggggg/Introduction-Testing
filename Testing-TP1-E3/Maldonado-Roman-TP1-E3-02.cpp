#include <iostream>
#include <string>
using namespace std;

int area(float base, float altura){
    float aux;

    aux = (base * altura) / 2;
    return aux;
}

bool esNegativo(float base, float altura){
    if (base < 0){
        cout << "> Su Base es negativo!" << endl;
        return true;
    }

    if (altura < 0){
        cout << "> Su Altura es negativo!" << endl;
        return true;
    }

    return false;
}

bool esPalabra(const string & str){
    for (char c : str){
        if (!isdigit(c)){
            cout << "> Su cadena de texto es intocable!" << endl;
            return true;
        }
    }
    return false;
}

int main() {
    float base, altura;
    string cadenaBase, cadenaAltura;

    while (true) {
        cout << "> Ingresa una Base de su triangulo: " << endl;
        cin >> cadenaBase;

        cout << "> Ingresa una Altura de su triangulo: " << endl;
        cin >> cadenaAltura;

        if (!esPalabra(cadenaBase) && !esPalabra(cadenaAltura)) {
            base = stof(cadenaBase);  // Convertir cadena a float
            altura = stof(cadenaAltura);

        if (!esNegativo(base, altura)) {
            float result = area(base, altura);
            cout << "> El Area del triangulo es: " << result << endl;
            break;
        }
    }   
}
return 0;
}
