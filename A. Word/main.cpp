#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string word;
    cin >> word; 
    int upperCount = 0, size = word.size();

    for (int i = 0; i < size; ++i){
        if( (int) word[i] < 97){
            ++upperCount;
        }
    }
    if(upperCount > (size/2)){
        for(int j = 0; j < size; ++j){
            word[j] = toupper(word[j]);
        }
    }
    else{
        for(int j = 0; j < size; ++j){
            word[j] = tolower(word[j]);
        }
    }
    cout << word;
    
    return  0;
}
