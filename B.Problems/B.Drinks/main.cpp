#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double totalDrinks, n;
    double total;
    cin >> totalDrinks;
    for(int i = 0; i < totalDrinks; ++i){
        cin >> n;
        total += n;
    }
    cout << (total/totalDrinks);
    return  0;
}

