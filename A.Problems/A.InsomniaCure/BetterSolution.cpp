#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int count=0;
	for(int i = 1; i < d+1; ++i){
		if(!(i%k)) count++;
		else if(!(i%l)) count++;
		else if(!(i%m)) count++;
		else if(!(i%n)) count++;
	}
	cout<<count;
  return 0;
}