#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    int x = 1; 
    while(t--){
        int n; 
        cin >> n;
        int aux = n;  
        vector<int> idades;
        while(n--){
             int i; 
             cin >> i; 
             idades.push_back(i);
        }
        sort(idades.begin(), idades.end()); 
        int meio = aux/2; 
        cout << "Case " << x << ": " << idades[meio] << endl; 
        x++;
    }
    return 0; 
}