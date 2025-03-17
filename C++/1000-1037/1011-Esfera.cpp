#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    
    double R;
    std::cin >> R;
    double PI = 3.14159;
    
    double volume = (4/3.0) * PI * pow(R, 3);
    
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "VOLUME = " << volume << std::endl;
    
    return 0;
}