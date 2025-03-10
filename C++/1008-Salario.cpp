#include <iostream>
#include <iomanip>

int main(){
    
    int numero;
    int horas_trabalhadas;
    double valor_hora;
    std::cin >> numero >> horas_trabalhadas >> valor_hora;
    
    double SALARY = horas_trabalhadas * valor_hora;
    
    std::cout << "NUMBER = " << numero << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "SALARY = U$ " << SALARY << std::endl;
    
    return 0;
}