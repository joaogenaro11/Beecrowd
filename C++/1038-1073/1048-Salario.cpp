#include <bits/stdc++.h>
using namespace std;

int main(){
    
    double Salario;
    cin >> Salario;
    
    int reajuste;
    
    if (Salario >= 0 && Salario <= 400.00){
        reajuste = 15;
    }else if(Salario >= 400.01 && Salario <= 800.00){
        reajuste = 12;
    }else if(Salario >=800.01 && Salario <= 1200.00){
        reajuste = 10;
    }else if(Salario >= 1200.01 && Salario <= 2000.00){
        reajuste = 7;
    }else{
        reajuste = 4;
    }
    
    double ReajusteGanho = Salario * reajuste / 100.0;
    double NovoSalario = Salario + ReajusteGanho;
    
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << NovoSalario << endl;
    cout << "Reajuste ganho: " << ReajusteGanho << endl;
    cout << "Em percentual: " << reajuste << " %" << endl;
    
    return 0;
}