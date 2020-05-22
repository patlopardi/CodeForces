#include <bits/stdc++.h>
#include <string>
using namespace std;
//This program would change all in the row instead of i+1 i-1 j+1 j-1 items
void lightMatrix(int funcArr[3][3], int x, int y){
    for(int m = 0; m < 3; ++m){
        if(m == x){
            continue;
        }
        if(funcArr[m][y] == 0){
            
            funcArr[m][y] = 1;
        }
        else{
            funcArr[m][y] = 0;
        }
    }
    
    for(int n = 0; n < 2; ++n){
        
        if(funcArr[x][n] == 0){
            funcArr[x][n] = 1;
        }
        else{
            funcArr[x][n] = 0;
        }
    }


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3][3];
    int resultArr[3][3];

    // initialization 
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin>>arr[i][j];
            resultArr[i][j] = 1;      
        }
    }

    //decrement the input array while turning on and off the lights for
    for(int x = 0; x < 3 ; ++x){
        for(int y = 0; y < 3; ++y){
            while(arr[x][y] > 0){
                arr[x][y]--;
                lightMatrix(resultArr, x, y);
            }
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<resultArr[i][j]  ;
        }
        cout << "\n";
    }
    return 0;
}