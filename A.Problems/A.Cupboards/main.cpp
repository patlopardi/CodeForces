#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, left, right, leftZeros = 0, rightZeros = 0, total = 0; 
    cin >> n;

    for(int i = 0; i <n ; ++i){
        cin >> left >> right;
        if(left == 0){
            ++leftZeros;
        }
        if(right == 0){
            ++rightZeros;
        }
    }
    if(leftZeros > (n-leftZeros)){
        total += (n-leftZeros);
    }
    else{
        total += leftZeros;
    }
    if(rightZeros > (n-rightZeros)){
        total +=  (n-rightZeros);
    }
    else{
        total += rightZeros;
    }
    cout << total;
    
    return  0;
}
