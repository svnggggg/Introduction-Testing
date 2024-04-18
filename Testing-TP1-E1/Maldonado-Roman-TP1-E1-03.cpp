#include <iostream>
#include <cassert>
using namespace std;

bool par(int num){
    if(num % 2 == 0){
        return true;
    }

    else{
        return false;
    }
}

void unitTest(){
    assert(par(2) == 1);
    assert(par(3) == 0);
    assert(par(10) == 1);
    assert(par(100) == 1);
    assert(par(9999) == 0);
    
    cout << "> Testeo unitario exitoso!" << endl;
}

int main(){
    unitTest();
    return 0;
}