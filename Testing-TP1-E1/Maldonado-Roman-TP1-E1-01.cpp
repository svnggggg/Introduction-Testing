#include <iostream>
#include <cassert>
using namespace std;

long long factorial(int num) { // Funcion para calcular el factorial de n numero 
    long long facto = 1;
    while (num > 0) {
        facto *= num;
        num -= 1;
    }
    
    return facto;
}

void unitTest() { // Funcion para hacer un teste unitario
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);
    assert(factorial(20) == 2432902008176640000);   

    cout << "> Testeo unitario exitoso!" << endl;
}

int main() {
    unitTest();
    return 0;
}
