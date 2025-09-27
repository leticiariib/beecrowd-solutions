#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    while(cin >> n){
        map<int,pair<int,int>> botas; 
        int conta = 0;
        while(n--){
            int tam; 
            char par; 
            cin >> tam >> par; 
            if(par == 'D') botas[tam].first++; 
            else botas[tam].second++; 
        }
        for(auto it : botas){
            pair<int,int> contagem = it.second; 
            conta += min(contagem.first, contagem.second);
        }
        cout << conta << endl; 
    }
    return 0; 
}