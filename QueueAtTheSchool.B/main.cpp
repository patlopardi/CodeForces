#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int length, swapLen;
    string line;
    cin >> length >> swapLen;
    cin >> line;

    for (int i = 0; i < length; i++){
        if (line[i] == 'B'){
            for(int j = swapLen + i; j > i; j--){
                if(line[j] == 'G'){
                    char temp = line[j];
                    line[j] = 'D';
                    line[i] = temp;
                    break;
                }
            }
        }  
}
    for(int i = 0; i < length; i++){
        if(line[i] == 'D'){
            line[i] = 'B';
        }
    }
    cout << line << endl;

}