#include<bits/stdc++.h>
using namespace std;
int num(int a,int b)
{
	if(b==1) 
		return 1;
	if(a==0) 
		return b;
	return (num(a-1,b)+num(a,b-1));
}
int main() {
  int T, k, n;
  cin>>T;
  for(int i=0; i<T; i++){
    cin>>k>>n;
    cout<<num(k, n)<<'\n';
  }
}
