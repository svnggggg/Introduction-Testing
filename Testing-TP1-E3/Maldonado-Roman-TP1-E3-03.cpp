#include <iostream>
#include <string>
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

bool esPalabra(const string & str){
    for (char c : str){
        if (!isdigit(c)){
            cout << "> Su cadena de texto es intocable!" << endl;
            return true;
        }
    }
    return false;
}


int main(){
    int num;
    string cadena;

    while (true)
    {
        cout << "> Ingresa un numero: " << endl;
        cin >> cadena; 

        if (!esNegativo(num) && !esPalabra(cadena)) {
            num = stoi(cadena);
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