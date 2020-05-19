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

    for (int i : line){
        if (line[i] = 'B'){
            if (i + swapLen < length){
                char temp = line[i+swapLen];
                line[i+swapLen] = line[i];
                line[i] = temp;
            }
        }
    }
    cout << line;

}