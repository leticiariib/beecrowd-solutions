#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    while(cin >> n && n != 0){
        int soma = 0;
        while(n--){
            int tam, v; 
            cin >> tam >> v; 
            soma += (v/2);
        }
        int res = soma/2; 
        cout << res << endl; 
    }
    return 0; 
}