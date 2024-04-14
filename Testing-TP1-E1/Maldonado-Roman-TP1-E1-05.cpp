#include <iostream>
#include <cassert>
using namespace std;

int primitivos(int num1, float num2) {
    float result;

    result = float(num1 + num2);
    cout << "> Num1 = " << num1 << " Num2 = " << num2 << endl;
    cout << "> Su suma nos da: " << result << endl;

    return result;
}

void unitTest() {
    assert(primitivos(2,5) == 7);
    assert(primitivos(7,7) == 14);
    assert(primitivos(10,5) == 15);

    cout << "> Testeo Unitario exitoso!" << endl;
}

int main() {
    unitTest();
    return 0;
}
