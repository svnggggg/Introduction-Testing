#include <iostream>
#include <cassert>
using namespace std;


int factorial(int num) {
    if(num < 0){
        throw " su numero es negativo, no se puede sacar factorial de un numero negativo!";
    }

    int facto = 1;
    while (num > 0) {
        facto *= num;
        num -= 1;
    }

    return facto;
}

int main() {
    int num;

    cout << "Ingresa un numero para ver su factorial: " << endl;
    cin >> num;
    try{
        int result = factorial(num);
        cout << "> El factorial es: " << result << endl;
    } catch(const char *mensaje){
        cout << "> Error: " << mensaje << endl;
    }

    return 0;
}
