#include <iostream>
#include <cassert>
using namespace std;

int par(int num){
    if(num % 2 == 0){
        cout << "> El numero " << num << " es par!" << endl;
        return 0;
    }

    else{
        cout << "> El numero " << num << " es impar!" << endl;
        return 1;
    }
}

void unitTest(){
    assert(par(2) == 0);
    assert(par(3) == 1);
    assert(par(10) == 0);
    cout << "> Testeo unitario exitoso!" << endl;
}

int main(){
    unitTest();
    return 0;
}