#include <bits/stdc++.h>
#include <string>
using namespace std;

int toggle(int arrValue){
    switch(arrValue){
        case 1:
            return 0;
        case 0:
            return 1;
    }
}

void lightMatrix(int funcArr[3][3], int x, int y){
    funcArr[x][y] = toggle(funcArr[x][y]);
    if((x + 1) < 3) {
        funcArr[x+1][y] = toggle(funcArr[x+1][y]); 
    }
    if ((x - 1) >= 0){
        funcArr[x-1][y] = toggle(funcArr[x-1][y]);
    }
    if ((y + 1) < 3){
        funcArr[x][y+1] = toggle(funcArr[x][y+1]); 
    }
    if((y - 1) >=  0){
        funcArr[x][y-1] = toggle(funcArr[x][y-1]);
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
    for(int x = 0; x < 3 ; ++x){
        for(int y = 0; y < 3; ++y){
            while(arr[x][y] > 0){
                if(arr[x][y] % 2 == 0){
                    break;
                }
                arr[x][y]--;
                lightMatrix(resultArr, x, y);
            }
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout<<resultArr[i][j];
        }
        cout << "\n";
    }
    return 0;
}