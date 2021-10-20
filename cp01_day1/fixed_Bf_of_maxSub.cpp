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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(auto &i:a)
        cin>>i;
    int mx=INT_MIN;
    int itr=0;
    for(int i=0;i<n;i++)
    {
          itr=i;
          int sm=0;
        for(int j=0;j<k;j++)
        {
            if(itr<n)
            {
                sm+=a[itr];
                itr++;
            }
        }
        mx=max(mx,sm);
    }
    cout<<mx;
    return 0;
}