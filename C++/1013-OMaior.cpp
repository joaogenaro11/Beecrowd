#include <iostream>
#include <cmath>

int main(){
    
    int A, B, C;
    std::cin >> A >> B >> C;
    
    int maiorAB = (A + B + abs(A - B)) / 2;
    int maior = (maiorAB + C + abs(maiorAB - C)) / 2;
    
    std::cout << maior << " eh o maior" << std::endl;
    
    return 0;
    
}