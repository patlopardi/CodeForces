
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, l, m, n, d, count = 0, i = 1;
    cin >> k >> l >> m >> n >> d;
    int arr[d + 1] = {};
    if(k == 1 || l == 1 || m == 1 || n == 1){
        cout << d;
        return 0;
    }

    for(i = 1; i < d+1; ++i){
        if((i * k) < (d+1)){
            arr[i*k] += 1;
        }
        if((i * l) < (d+1)){
            arr[i*l] += 1;
        }
        if((i * m) < (d+1)){
            arr[i*m] += 1;
        }
        if((i * n) < (d+1)){
            arr[i*n] += 1;
        }
        if((i * l) < (d+1)){
            arr[i*l] += 1;
        }
    }
    for(i = 1; i < (d+1); ++i){
        if(arr[i] > 0){
            ++count;
        }        
    }
    cout << count;

    return  0;
}
