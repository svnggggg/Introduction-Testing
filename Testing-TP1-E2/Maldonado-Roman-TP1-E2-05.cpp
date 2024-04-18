#include <iostream>
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

int main(){
    int a, b;

    cout << "Ingresa A: ";
    cin >> a;

    cout << "Ingresa B: ";
    cin >> b;

    try{
        if (a < 0 || b < 0){
            throw "no se pueden obtener MCD de numeros negativos!";
            return 1;
        }
        if(cin.fail()){
            cin.clear(); 
            throw "su entrada es invalida!";
            return 1;
        }

        int result = mcd(a, b);
        cout << "El MCD es: " << result << endl;
    }
    catch(const char *mensaje)
    {
        cout << "> Error: " << mensaje << endl;
    }

    return 0;
}
