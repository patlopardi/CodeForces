#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<char, int> inNamesMap; 
    unordered_map<char, int> combinedMap;
    string name1, name2, combined;
    cin >> name1 >> name2 >> combined;
    if((name1.size() + name2.size()) != combined.size()){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < combined.size(); ++i){
        combinedMap[combined[i]] += 1;
        if(i < name1.size()){
            inNamesMap[name1[i]] += 1;
        }
        if(i < name2.size()){        
            inNamesMap[name2[i]] += 1;
        }
    }
 
    for(int i = 0; i < combined.size(); ++i){
        if(combinedMap[combined[i]] != inNamesMap[combined[i]]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return  0;
}

