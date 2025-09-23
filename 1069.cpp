#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; cin >> n; 
    while(n--){
        vector <char> a; 
        string e; 
        cin >> e; 
        for(int i = 0; i < e.length(); ++i){
            a.push_back(e[i]); 
        }
        int conta = 0;
        while(find(a.begin(), a.end(), '<') != a.end() && find(a.begin(), a.end(), '>') != a.end()){
            auto pos = find(a.begin(), a.end(), '<');
            auto pos2 = find(a.begin(), a.end(), '>'); 
            if(pos < pos2){
                conta++; 
                a.erase(pos); 
                auto pos2_atualizado = find(a.begin(), a.end(), '>'); 
                a.erase(pos2_atualizado); 
            }else a.erase(pos2);
        }
        cout << conta << endl; 
    }
    return 0; 
}