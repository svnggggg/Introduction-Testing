#include <iostream>
#include <string>
using namespace std;

int mcd(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

bool esNegativo(int a, int b){
    if (a < 0){
        cout << "> Su numero A es negativo!" << endl;
        return true;
    }
    if (b < 0){
        cout << "> Su numero B es negativo!" << endl;
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

int main(){
    int a, b;
    string cadenaA, cadenaB;

    while (true)
    {
        cout << "Ingresa A: ";
        cin >> cadenaA;

        cout << "Ingresa B: ";
        cin >> cadenaB;

        if (!esPalabra(cadenaA) && !esPalabra(cadenaB)) {
            a = stof(cadenaA);
            b = stof(cadenaB);  

        if(!esNegativo(a,b)){
            int result = mcd(a, b);
            cout << "El MCD es: " << result << endl;
            break;
        }
    }
}
return 0;
}