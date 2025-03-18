#include <bits/stdc++.h> 
using namespace std;

int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;
    
    int val[3] = {X, Y, Z};
    int ordem[3] = {X, Y, Z};
    
    sort(ordem, ordem + 3);
    
    for(int i = 0; i < 3; i++){
        cout << ordem[i] << endl; 
    }
    cout << "" << endl;
    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;
    
    return 0;
}