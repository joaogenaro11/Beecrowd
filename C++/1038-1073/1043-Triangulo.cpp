#include <bits/stdc++.h>
using namespace std;

int main(){

    double A, B, C;
    cin >> A >> B >> C;

    double perimetro = (A + B + C);
    double area = (A + B) * C / 2.0;

    if (A + B > C && A + C > B && B + C > A){
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << endl;
    } else{
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }
return 0;
}
