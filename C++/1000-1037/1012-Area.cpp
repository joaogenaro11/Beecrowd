#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    
    double A, B, C;
    std::cin >> A >> B >> C;
    double PI = 3.14159;
    
    double triangulo = (A * C) / 2;
    double circulo = PI * pow(C, 2);
    double trapezio = ((A + B) * C) / 2;
    double quadrado = B * B;
    double retangulo = A * B;
    
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "TRIANGULO: " << triangulo << std::endl;
    std::cout << "CIRCULO: " << circulo << std::endl;
    std::cout << "TRAPEZIO: " << trapezio << std::endl;
    std::cout << "QUADRADO: " << quadrado << std::endl;
    std::cout << "RETANGULO: " << retangulo << std::endl;
    
    return 0;
}