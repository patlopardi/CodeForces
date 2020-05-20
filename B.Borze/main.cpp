#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    string str, checkStr;
    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        switch(str[i]){
            case '.':
                cout << 0;
                break;
            case '-':
                if(str[i+1] == '.'){
                    cout << 1;
                    ++i;
                }
                else if (str[i+1] == '-') {
                    cout << 2;
                    ++i;
                }
        }
    }
    return 0;
}
