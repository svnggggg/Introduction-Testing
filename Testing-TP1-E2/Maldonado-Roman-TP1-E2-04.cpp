#include<iostream>
using namespace std;

int promedio(int n1, int n2, int n3){
    int aux = (n1 + n2 + n3) / 3;
    return aux;
}

int main(){
    int n1, n2, n3;

	cout << "> Porfavor digite su nota 1: " << endl;
	cin >> n1;

	cout << "> Porfavor digite su nota 2: " << endl;
	cin >> n2;

	cout << "> Porfavor digite su nota 3: " << endl; 
	cin >> n3;

    try{
        if (n1 < 0 || n2 < 0 || n3 < 0){
            throw "su nota es negativa!";
            return 1;
        }
        if(cin.fail()){
            cin.clear(); 
            throw "su entrada es invalida!";
            return 1;
        }

        int result = promedio(n1, n2, n3);
        cout << "> Su nota final es de: " << result << endl;
    }
    catch(const char *mensaje)
    {
        cout << "> Error: " << mensaje << endl;
    }
    
	return 0;
}