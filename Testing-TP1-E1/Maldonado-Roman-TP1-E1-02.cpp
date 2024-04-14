#include <iostream>
#include <cassert>
using namespace std;

int triangulo(float base, float altura) { 
    float area = (base * altura) / 2;
    cout << "> El area de su triangulo es de: " << area << endl;

    return area;
}

void unitTest() { 
    assert(triangulo(2, 2) == 2); 
    assert(triangulo(6, 6) == 18); 
    cout << "> Testeo Unitario exitoso!" << endl;
}

int main() {
    unitTest();
    return 0;
}
