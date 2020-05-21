#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string strYear;
    int year, flag = 1;
    cin >> year;

    while(1){
        ++year;
        strYear = to_string(year);
        flag = 1;
        for (int i = 0; i < 4; ++i){
            for(int j = i+1; j < 4; ++j){
                if(strYear[i] == strYear[j]){
                    flag = 0;
                }
            }
        }
        if (flag == 1){
            cout<<year;
            break;
        }
        if(strYear.size() > 4){
            cout<< "no answer";
            break;
        }
    }
    return 0;
}