#include <iostream> 
#include <iomanip>
#include <string>

int main(){
    
    std::string nome;
    double salario_fixo, total_vendas;
    
    std::getline(std::cin, nome);
    std::cin >> salario_fixo >> total_vendas;
    
    double SALARY = salario_fixo + (total_vendas * 0.15);
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " << SALARY << std::endl;
    
    return 0;
}