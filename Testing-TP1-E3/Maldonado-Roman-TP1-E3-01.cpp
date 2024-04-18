#include <iostream>
#include <cctype>

using namespace std;

long long factorial(int num) {
    long long facto = 1;
    while (num > 0) {
        facto *= num;
        num -= 1;
    }
    return facto;
}

bool esNegativo(int num){
    if (num < 0){
        cout << "> Su numero es negativo!" << endl;
        return true;
    }
    return false;
}

bool esPalabra(const string & str){ // Toma de referencia constante a un objeto string como argumento y devuelve un bool
    for (char c : str){ // Recorre cada caracter 'c' en el string 
        if (!isdigit(c)){ // Verifica si 'c' no es un numero con isdigit()
            cout << "> Su cadena de texto es intocable!" << endl;
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    string cadena;

    while (true) {
        cout << "> Ingresa un numero para ver su factorial: " << endl;
        cin >> cadena;

        if (!esNegativo(num) && !esPalabra(cadena)) {
            num = stoi(cadena); // Convierte un numero entero a una cadena
            int result = factorial(num);
            cout << "> El factorial es: " << result << endl;
            break;
        }
    }

    return 0;
}
