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
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)
        cin>>i;
    int q; cin>>q;
    while(q--)
    {
         int x,y,z;
         cin>>x>>y>>z;
         for(int i=x;i<=y;i++)
         {
            a[i]+=z;
         }
        for(auto i:a)
            cout<<i<<" ";
        cout<<e;
    }

    return 0;
}