#include <iostream>
#include <iomanip>

int main(){
    
    int X;
    double Y;
    std::cin >> X >>Y;
    
    double media = X / Y;
    
    std::cout << std::fixed << std::setprecision(3);
    std::cout << media << " km/l" << std::endl;
    
    return 0;
}