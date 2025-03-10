#include <iostream>
#include <cmath>

int main (){
    
    double N;
    std::cin >> N;
    
    int centavos = round(N * 100);
    
    int nota100 = centavos / 10000; centavos %= 10000;
    int nota50 = centavos / 5000; centavos %= 5000;
    int nota20 = centavos / 2000; centavos %= 2000;
    int nota10 = centavos / 1000; centavos %= 1000;
    int nota5 = centavos / 500; centavos %= 500;
    int nota2 = centavos / 200; centavos %= 200;
    
    int moeda1 = centavos / 100; centavos %= 100;
    int moeda050 = centavos / 50; centavos %= 50;
    int moeda025 = centavos / 25; centavos %= 25;
    int moeda010 = centavos / 10; centavos %= 10;
    int moeda005 = centavos / 5; centavos %= 5;
    int moeda001 = centavos / 1; centavos %= 1;
    
    std::cout << "NOTAS:" << std::endl;
    std::cout << nota100 << " nota(s) de R$ 100.00" << std::endl;
    std::cout << nota50 << " nota(s) de R$ 50.00" << std::endl;
    std::cout << nota20 << " nota(s) de R$ 20.00" << std::endl;
    std::cout << nota10 << " nota(s) de R$ 10.00" << std::endl;
    std::cout << nota5 << " nota(s) de R$ 5.00" << std::endl;
    std::cout << nota2 << " nota(s) de R$ 2.00" << std::endl;
    
    std::cout << "MOEDAS:" << std::endl;
    std::cout << moeda1 << " moeda(s) de R$ 1.00" << std::endl;
    std::cout << moeda050 << " moeda(s) de R$ 0.50" << std::endl;
    std::cout << moeda025 << " moeda(s) de R$ 0.25" << std::endl;
    std::cout << moeda010 << " moeda(s) de R$ 0.10" << std::endl;
    std::cout << moeda005 << " moeda(s) de R$ 0.05" << std::endl;
    std::cout << moeda001 << " moeda(s) de R$ 0.01" << std::endl;
    
    return 0;
}