#include <bits/stdc++.h>
using namespace std; 
int main(){
    int hi, mi, hf, mf; 
    cin >> hi >>mi>>hf>>mf; 
    int mTi = hi*60 + mi; 
    int mTf = hf*60 + mf; 
    int diff = mTf - mTi; 
    if(mTi >= 720 && diff <=0) diff = (24*60 - mTi) + mTf; 
    else if(diff <= 0) diff = 24*60 + diff; 
    int ht, mt; 
    ht = diff/60; 
    mt = diff%60; 
    cout << "O JOGO DUROU " << ht << " HORA(S) E " << mt << " MINUTO(S)" << endl; 
    return 0; 
}
