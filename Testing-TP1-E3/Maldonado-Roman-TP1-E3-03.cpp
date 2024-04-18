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

bool esNegativo(int num){
    if (num < 0){
        cout << "> Su numero es negativo!" << endl;
        return true;
    }
    return false;
}

int main(){
    int num;

    while (true)
    {
        cout << "> Ingresa un numero: " << endl;
        cin >> num; 

        if(!esNegativo(num)){
            int result = par(num);
            if(par(num)){
                cout << "> El numero " << num << " es par!" << endl;
                return 0;
            }
            else if(!par(num)){
                cout << "> El numero " << num << " es impar!" << endl;
                return 1;
            }
        }
    }
return 0;
}