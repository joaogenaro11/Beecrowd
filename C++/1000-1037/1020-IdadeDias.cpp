#include <iostream>

int main (){
    
    int N;
    std::cin >> N;
    
    int ano = N / 365;
    N = N % 365;
    
    int mes = N / 30;
    int dia = N % 30;
    
    std::cout << ano << " ano(s)" << std::endl;
    std::cout << mes << " mes(es)" << std::endl;
    std::cout << dia << " dia(s)" << std::endl;
    
    return 0;
}