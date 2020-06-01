#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n] = {0};

    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i]; 
    } 
    int smallest = 1001, index = 0;
    for(int j = 1; j < n; ++j){
        if (smallest > abs(arr[j] - arr[j-1])){
            smallest = abs(arr[j] - arr[j-1]);
            index = j;
        }
        //check for loop 
        if(j == n - 1){
            if (smallest > abs(arr[0] - arr[n-1])){
                smallest = abs(arr[0] - arr[n-1]);
                index = j + 1;
            }
        }
    }
    cout << index << " ";
    if(index + 1 > n){
        index -= n;
    }
    cout << index + 1;
    return 0;
}
