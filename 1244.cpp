#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; cin >> n; 
    cin.ignore();
    while(n--){
        vector<string> ordenada; 
        vector<string> p; 
        set<int> tam;
        vector<int> t;
        string frase; 
        getline(cin, frase); 
        stringstream ss(frase); 
        string palavra; 
        while(ss >> palavra){
            p.push_back(palavra); 
        }
        for(auto it : p){
            int t= it.length(); 
            tam.insert(t); 
        }
        for(auto it : tam){
            t.push_back(it);
        }
        sort(t.rbegin(), t.rend()); 
        for(auto it : t){
            for(auto i : p){
                if(i.length() == it){
                    ordenada.push_back(i); 
                }
            }
        } 
        bool prim = true;
        for(auto it : ordenada){
            if(prim) cout << it;
            else cout << " " << it;  
            prim = false; 
        }
        cout << endl; 
    }
    return 0; 
}