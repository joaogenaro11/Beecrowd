#include <iostream> 
#include <iomanip>

int main(){
    double A, B;
    std::cin >> A >> B;
    
    double MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << MEDIA << std::endl;
    
    return 0;
}


