#include <bits/stdc++.h>
using namespace std; 
int main(){
    string a;
    set<string> dic;  
    while(getline(cin, a)){
        string palavra = ""; 
        for(char atual : a){
            if(atual >= 'A' && atual <='Z')
                palavra += tolower(atual); 
            else if(atual >= 'a' && atual <='z')
                palavra += (atual);
            else{
                if(!palavra.empty()){
                    dic.insert(palavra); 
                    palavra = "";
                }
            } 
        }
        if(!palavra.empty()) dic.insert(palavra); 
    }
    for(string p : dic){
        cout << p << endl; 
    }
    return 0; 
}