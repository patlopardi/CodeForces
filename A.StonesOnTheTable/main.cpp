#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, count = 0;
    string s;
    cin >> n >> s;

    for(int i = 1; i < n; ++i ){
        if(s[i-1] == s[i]){
            ++count;
        }
    }
    cout << count;

    return  0;
}
