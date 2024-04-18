#include <iostream>
#include <cassert>
using namespace std;

int triangulo(float base, float altura) { 
    float area = (base * altura) / 2;

    return area;
}

void unitTest() { 
    assert(triangulo(2, 2) == 2); 
    assert(triangulo(6, 6) == 18); 

    cout << "> Testeo unitario exitoso!" << endl;
}

int main() {
    unitTest();
    return 0;
}
