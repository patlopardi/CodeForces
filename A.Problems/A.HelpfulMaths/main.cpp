#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    cin >> input;
    int size = input.size();
    sort(input.begin(), input.end());
    for(int i = (size/2); i < size; ++i){
        if((i + 1) == size){
            cout << input[i];
        }else{
            cout << input[i] << "+";
        }
        
    }
    return  0;
}

