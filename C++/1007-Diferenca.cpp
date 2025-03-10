#include <iostream> 

int main(){
    
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    
    int DIFERENCA = (A * B - C * D);
    
    std::cout << "DIFERENCA = " << DIFERENCA << std::endl;
    
    return 0;
}