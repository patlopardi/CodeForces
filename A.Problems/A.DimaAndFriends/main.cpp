#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int numFriends, fingers, totFingers = 0;
    cin >> numFriends;
    
    for(int i = 0; i < numFriends; ++i){
        cin >> fingers;
        totFingers += fingers;
    }
    ++numFriends;
    if(totFingers % 2 == 0 && numFriends % 2 == 0){
        cout << 2;
    }
    else{
        cout << 3;
    }
    return 0;
}
