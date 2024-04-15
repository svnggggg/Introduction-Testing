#include <iostream>
using namespace std;

int mcd(int a, int b) {
    int resto;

    if (a < 0 || b < 0)
    {
        throw "no se pueden obtener MCD de numeros negativos!";
    }

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main(){
    int num1, num2;

    cout << "Ingresa A: ";
    cin >> num1;

    cout << "Ingresa B: ";
    cin >> num2;

    try
    {
        int result = mcd(num1, num2);
        cout << "El MCD es: " << result << endl;
    }
    catch(const char *mensaje)
    {
        cout << "> Error: " << mensaje << endl;
    }

    return 0;
}
