#include <iostream>
#include <cassert>
using namespace std;

int factorial(int num) { // Funcion para calcular el factorial de n numero 
    int facto = 1;
    
    while (num > 0) {
        facto *= num;
        num -= 1;
    }
    
    return facto;
}

void unitTest() { // Funcion para hacer un teste unitario
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);  
    cout << "> Testeo Unitario exitoso!" << endl;
}

int main() {
    unitTest();
    return 0;
}
