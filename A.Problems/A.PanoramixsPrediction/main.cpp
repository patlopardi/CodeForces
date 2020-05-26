#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int beg,end;
    cin >> beg >> end;

    if(isPrime(end) == false){
        cout << "NO";
        return 0;
    }
    for(int i = (beg+1); i < end; ++i){
        if (i % 2 == 0){
            continue;
        }    
        if(isPrime(i) == true){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";


    return  0;
}
