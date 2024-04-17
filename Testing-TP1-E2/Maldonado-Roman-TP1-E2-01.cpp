#include <iostream>
#include <cassert>
using namespace std;

long long factorial(int num) {
    long long facto = 1;
    while (num > 0) {
        facto *= num;
        num -= 1;
    }

    return facto;
}

int main() {
    int num;

    cout << "> Ingresa un numero para ver su factorial: " << endl;
    cin >> num;

    try{
        if(num < 0){
            throw " su numero es negativo, no se puede sacar factorial de un numero negativo!";
        }

        int result = factorial(num);
        cout << "> El factorial es: " << result << endl;
    } catch(const char *mensaje){
        cout << "> Error: " << mensaje << endl;
    }

    return 0;
}
