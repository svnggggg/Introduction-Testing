#include <iostream>
#include <string>
using namespace std;

int promedio(int n1, int n2, int n3){
    int aux = (n1 + n2 + n3) / 3;
    return aux;
}

bool esNegativo(int n1, int n2, int n3){
    if (n1 < 0){
        cout << "> Su nota numero 1 es negativa!" << endl;
        return true;
    }
    if (n2 < 0){
        cout << "> Su nota numero 2 es negativa!" << endl;
        return true;
    }
    if (n3 < 0){
        cout << "> Su nota numero 3 es negativa!" << endl;
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
    int n1, n2, n3;
    string cadenaN1, cadenaN2, cadenaN3;

    while (true)
    {
        cout << "> Porfavor digite su nota 1: " << endl;
	    cin >> cadenaN1;

	    cout << "> Porfavor digite su nota 2: " << endl;
	    cin >> cadenaN2;

	    cout << "> Porfavor digite su nota 3: " << endl; 
	    cin >> cadenaN3;

        if (!esPalabra(cadenaN1) && !esPalabra(cadenaN2) && !esPalabra(cadenaN3)) {
            n1 = stof(cadenaN1);
            n2 = stof(cadenaN2);  
            n3 = stof(cadenaN3);  

        if(!esNegativo(n1,n2,n3)){
            int result = promedio(n1, n2, n3);
            cout << "> Su nota final es de: " << result << endl;
            break;
        }
    }
	
}
return 0;
}