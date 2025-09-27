#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin >> n; 
    vector<int> r;
    while(n--){
        int i;
        cin >> i; 
        r.push_back(i); 
    }
    auto it = min_element(r.begin(), r.end());
    int d = distance(r.begin(), it);
    cout << d + 1 << endl;  
    return 0; 
}