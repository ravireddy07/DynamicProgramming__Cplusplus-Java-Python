#include <iostream>
#define re(i,j,n) for(int i=j;i<n;i++)
using namespace std;

int main() {
	unsigned long long n,f=0,i,a[100010];
	cin>>n;
	re(i,0,n)cin>>a[i];
	re(i,0,n)
 	  re(j,i+1,n)
	    re(k,j+1,n)
		re(l,k+1,n)
		  if((a[i]^a[j]^a[k]^a[l])==0){cout<<"Yes";return 0;}
	cout<<"No";
	return 0;
}
