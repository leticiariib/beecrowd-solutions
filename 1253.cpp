#include <bits/stdc++.h>
using namespace std; 
string converte(int n, string a){
    string saida = ""; 
    char pos; 
    for(int i = 0; i < a.length(); i++){
        pos = a[i] - n;
        if(pos < 'A') pos += 26; 
        saida.push_back(pos);
    }
    return saida; 
}
int main(){
    int n; cin >> n; 
    while(n--){
        int p; 
        string e; 
        cin >> e; 
        cin >> p; 
        string b = converte(p, e); 
        cout << b << endl; 
    }
    return 0; 
}