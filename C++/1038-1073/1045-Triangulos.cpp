#include <bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;

    double lados[] = {A, B, C};
    sort(lados, lados + 3, greater<double>());
    A = lados[0], B = lados[1], C = lados[2];

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else {
        if (A * A == B * B + C * C) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A * A > B * B + C * C) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A * A < B * B + C * C) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if (A == B || A == C || B == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}