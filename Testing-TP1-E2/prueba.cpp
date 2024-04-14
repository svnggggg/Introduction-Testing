#include <iostream>

int division(int a, int b) {
    if (b == 0) {
        throw "Division por cero no permitida";
    }
    return a / b;
}

int main() {
    int numerador, denominador;
    
    std::cout << "Ingrese numerador: ";
    std::cin >> numerador;
    
    std::cout << "Ingrese denominador: ";
    std::cin >> denominador;
    
    try {
        int resultado = division(numerador, denominador);
        std::cout << "Resultado: " << resultado << std::endl;
    } catch (const char* mensaje) {
        std::cerr << "Error: " << mensaje << std::endl;
    }

    return 0;
}
