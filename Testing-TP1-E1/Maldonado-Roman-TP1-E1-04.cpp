#include <iostream>
#include <cassert>
using namespace std;

int suma(){
    int result = 0;
    int cont = 1;

    while (cont < 17)
    {
        result += 1;
        cont += 1;
    }
    
    cout << "> El resultado de la suma de los 5 primeros numeros naturales es: " << result << endl;
    return result;
}

void unitTest(){
    assert(suma() == 16);
    cout << "> Testeo unitario exitoso!" << endl;
}

int main(){
    unitTest();
    return 0;
}