#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int houses, tasks, task, last;
    long long time = 0;
    cin >> houses >>tasks;
    for (int i = 0; i < tasks; ++i){
        cin >> task;
        if(i == 0){
            last = task;
            time += task;
            continue;
        }
        if(last < task){
            time += abs(last - task);

        }
        if (last > task){
            time += abs(last - houses) + task; 
        }
            last = task;        
    }
    cout << time-1;

    return 0;
}
