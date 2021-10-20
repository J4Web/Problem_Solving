#include<bits/stdc++.h>
#define e endl
#define pb push_back
#define ll long long
#define speed ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    speed
    //Write your code here 
    int n,k; cin>>n>>k;
    int a[n];
    for(auto &i:a)
        cin>>i;
    int sm=0;
    int mx=INT_MIN;
    for(int i=0;i<n-k+1;i++)
    {
        sm=0;
        for(int j=i;j<i+k;j++)
        {
            cout<<a[j]<<" ";
            sm+=a[j];
            // cout<<sm<<e;
        }
        cout<<endl;
        mx=max(sm,mx);
        // cout<<sm<<e;
        sm=0;
    }
    cout<<mx<<e;
    return 0;
}