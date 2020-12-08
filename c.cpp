#include<bits/stdc++.h>
using namespace std;

int prac(const vector<int>& a, int n, int i, int j, int b[n][])
{
	if(a[i]*2<a[n-1])
	{
		j++;
		if(b[n][i]!=0) j=b[n][i];
		else 
		{
			j=min(prac(a,n,i+1,j),prac(a,n-1,i,j));
			b[n][i]=j;
		}		
	}
	return j;
}

int main()
{
	freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
	int i,j=0,k=0;
	int n;
	cin>>n;
	int b[n][n]={0};
	vector<int>a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	j=prac(a,n,0,j,b);
	cout<<j<<endl;
	return 0;
}