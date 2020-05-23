#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    string b1,b2;
    cin >> b1 >> b2;
	for (int i = 0; i < b1.length(); i++) {
		if (b1[i] != b2[i]){
            cout << 1;
        } 
		else{
            cout << 0;
        } 
	}
    return  0;
}
