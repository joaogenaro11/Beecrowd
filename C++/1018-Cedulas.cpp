#include <iostream>

int main(){
    
    int N;
    std::cin >> N;
    
    int original_N = N; 
    
    int nota100 = N / 100;
    N = N % 100;
    
    int nota50 = N / 50;
    N = N % 50;
    
    int nota20 = N / 20;
    N = N % 20;
    
    int nota10 = N / 10;
    N = N % 10;
    
    int nota5 = N / 5;
    N = N % 5;
    
    int nota2 = N / 2;
    N = N % 2;
    
    int nota1 = N / 1;
    
    std::cout << original_N << std::endl;
    std::cout << nota100 << " nota(s) de R$ 100,00" << std::endl;
    std::cout << nota50 << " nota(s) de R$ 50,00" << std::endl;
    std::cout << nota20 << " nota(s) de R$ 20,00" << std::endl;
    std::cout << nota10 << " nota(s) de R$ 10,00" << std::endl;
    std::cout << nota5 << " nota(s) de R$ 5,00" << std::endl;
    std::cout << nota2 << " nota(s) de R$ 2,00" << std::endl;
    std::cout << nota1 << " nota(s) de R$ 1,00" << std::endl;
    
    return 0;
}