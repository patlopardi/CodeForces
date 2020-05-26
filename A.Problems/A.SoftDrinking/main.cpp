#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, l, c, d, p, nl, np;
    cin>> n>> k>> l>> c>> d>> p>> nl>> np;
    cout << min( min((l*k)/(n*nl), (p)/(n*np)) , (c * d) / n );
    return  0;
}

