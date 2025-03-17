#include <iostream>
#include <iomanip>

int main(){
    

    double R;
    std::cin >> R;
    
    double area = 3.14159 * R * R;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << area << std::endl;
    
    return 0;
}