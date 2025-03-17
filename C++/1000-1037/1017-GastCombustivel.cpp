#include <iostream>
#include <iomanip>

int main(){
    
    int tempo, velocidade;
    std::cin >> tempo >> velocidade;
    
    double litros = (double)(tempo * velocidade) / 12;
    
    std::cout << std::fixed << std::setprecision(3);
    std::cout << litros << std::endl;
    
    return 0;
}