#include <bits/stdc++.h>
using namespace std;

int main(){

    int A, B;
    cin >> A >> B;

    int horas;

    if(A < B){
        horas = B - A;
    } else if(A > B){
        horas = 24 - A + B;
    } else {
        horas = 24;
    }
    cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;
    
    return 0;
}