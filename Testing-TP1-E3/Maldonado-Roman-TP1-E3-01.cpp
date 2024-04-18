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

bool esNegativo(int num){
    if (num < 0){
        cout << "> Su numero es negativo!" << endl;
        return true;
    }
    return false;
}

int main() {
    int num;

    while (true) {
        cout << "> Ingresa un numero para ver su factorial: " << endl;
        cin >> num;

        if (!esNegativo(num)) {
            int result = factorial(num);
            cout << "> El factorial es: " << result << endl;
            break;
        }
    }

    return 0;
}
