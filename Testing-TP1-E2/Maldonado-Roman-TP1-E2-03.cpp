#include <iostream>

using namespace std;

bool par(int num){
    if(num % 2 == 0){
        return true;
    }

    else{
        return false;
    }
}

int main(){
    int num;

    cout << "> Ingresa un numero: " << endl;
    cin >> num; 

    try{
        if(num < 0){
            throw "el numero que ingresaste es negativo";
            return 1;
        }
        if(cin.fail()){
            cin.clear(); 
            throw "su entrada es invalida!";
            return 1;
        }

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
    catch(const char *mensaje)
    {
        cout << "> Error: " << mensaje << endl;
    }

    return 0;
}