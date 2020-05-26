#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, capacity = 0, In, Out, totalIn = 0, totalOut = 0;
    cin >> n;

    for(int i = 0; i < n; ++i){
        if(capacity < totalIn){
            capacity = totalIn;
        }
        cin >> Out >> In;  
        totalIn += In;
        totalIn -= Out;
    }
    cout << capacity;
    return  0;
}
