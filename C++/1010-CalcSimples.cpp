#include <iostream>
#include <iomanip>

int main(){
    
    int codigo1, qtd1;
    double valor1;
    int codigo2, qtd2;
    double valor2;
    
    std::cin >> codigo1 >> qtd1 >> valor1;
    std::cin >> codigo2 >> qtd2 >> valor2;
    
    double total = (qtd1 * valor1) + (qtd2 * valor2);
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "VALOR A PAGAR: R$ " << total << std::endl;
    
    return 0;
    
}