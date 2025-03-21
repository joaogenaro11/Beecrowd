#include <bits/stdc++.h>
using namespace std;

int main(){

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int inicio = (A * 60 + B);
    int fim = (C * 60 + D);

    int duracao;

    if(fim > inicio){
        duracao = fim - inicio;
    } else {
        duracao = (24 * 60 - inicio + fim);
    }
    
    int horas = duracao / 60;
    int min = duracao % 60;

    cout << "O JOGO DUROU " << horas << " HORAS(S) E " << min << " MINUTOS" << endl; 

    return 0;
}
