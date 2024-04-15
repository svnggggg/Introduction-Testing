#include <iostream>
#include <cassert>
using namespace std;

int par(int num){
    if(num < 0){
        throw "el numero que ingresaste es negativo";
    }

    if(num % 2 == 0){
        cout << "> El numero " << num << " es par!" << endl;
        return 0;
    }

    else{
        cout << "> El numero " << num << " es impar!" << endl;
        return 1;
    }
}

int main(){
    int num;
    
    cout << "> Ingresa un numero: " << endl;
    cin >> num; 

    try{
        int result = par(num);
    }
    catch(const char *mensaje)
    {
        cout << "> Error: " << mensaje << endl;
    }
    

    return 0;
}