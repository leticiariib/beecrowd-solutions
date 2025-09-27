#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n, num; 
    vector <int> numeros; 
    cin >> n; 
    while(n--){
        cin>>num; 
        numeros.push_back(num); 
    }
    sort(numeros.begin(), numeros.end());
    int i = 0;  
    while(i != numeros.size()){
        int c = count(numeros.begin(), numeros.end(), numeros.at(i)); 
        cout << numeros.at(i) << " aparece " << c << " vez(es)" << endl; 
        i += c; 
    }
    return 0; 
}