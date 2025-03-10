#include <iostream>
#include <iomanip>

int main(){
    
    double A , B , C;
    std::cin >> A >> B >> C;
    
    double MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << MEDIA << std::endl;
    
    return 0;
}