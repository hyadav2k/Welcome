#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i=0,j,s=0;
        cin>>n>>k;
        vector<int>a(n);
        while(k>0)
        {
            a[i]=-i-1;
            s+=a[i];
            if(s>0)k--;
            else
            {
                a[i]=-a[i];
                s+=2*a[i];
                if(s>0)k--;
            }
            i++;
        }
        for(;i<n;i++)a[i]=-i-1;
        for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}