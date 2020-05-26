#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int luckyCount = 0;
    string n;
    cin >> n;
    for (int i = 0; i < n.size(); ++i){
        if (n[i] == '7' || n[i] == '4'){
            luckyCount++;
        }
    }
    if(luckyCount == 4 || luckyCount == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return  0;
}
