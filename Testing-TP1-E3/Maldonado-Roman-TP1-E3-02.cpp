#include <iostream>
#include <cassert>
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

int main() {
    float base, altura;

    while (true) {
        cout << "> Ingresa una Base de su triangulo: " << endl;
        cin >> base;

        cout << "> Ingresa una Altura de su triangulo: " << endl;
        cin >> altura;

        if (!esNegativo(base, altura)) {
            float result = area(base, altura);
            cout << "> El Area del triangulo es: " << result << endl;
            break;
        }
    }

    return 0;
}
