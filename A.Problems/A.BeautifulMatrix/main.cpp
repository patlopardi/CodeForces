
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int arr[5][5];
    int pointX;
    int pointY;
    
    for(int i = 0; i < 5; i++){

        scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);

        if(arr[i][0] == 1){
            pointX = i+1;
            pointY = 1;
        }
        else if(arr[i][1] == 1 ){
            pointX = i+1;
            pointY = 2;
        }
        else if(arr[i][2] == 1){
            pointX = i+1;
            pointY = 3;
        }
        else if(arr[i][3] == 1){
            pointX = i+1;
            pointY = 4;
        }
        else if(arr[i][4] == 1){
            pointX = i+1;
            pointY = 5;
        }

    }
    int result = abs(3-pointX) + abs(3-pointY);
    printf("%d", result);
}