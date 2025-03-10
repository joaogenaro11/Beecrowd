#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    
    double A, B, C;
    std::cin >> A >> B >> C;
    
    double delta = pow(B, 2) - (4 * A * C);
    
    if (A == 0 || delta < 0){
        std::cout << "Impossivel calcular" << std::endl;
    } else {
        double R1 = (-B + sqrt(delta)) / (2 * A);
        double R2 = (-B - sqrt(delta)) / (2 * A);
            
            std::cout << std::fixed << std::setprecision(5);
            std::cout << "R1 = " << R1 << std::endl;
            std::cout << "R2 = " << R2 << std::endl;
    }
    return 0;
}