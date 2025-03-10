#include <iostream>
#include <iomanip>

int main (){
    
    double X;
    std::cin >> X;
    
    if (X >= 0 && X <= 25){
        std::cout << "Intervalo [0,25]" <<std::endl;
    } else if (X > 25 && X <= 50){
        std::cout << "Intervalo (25,50]" << std::endl;
    } else if (X > 50 && X <= 75){
        std::cout << "Intervalo (50,75]" << std::endl;
    } else if (X > 75 && X <= 100){
        std::cout << "Intervalo (75,100]" << std::endl;
    } else {
        std::cout << "Fora de intervalo" << std::endl;
    }
    
    return 0;
    
    
    
}
