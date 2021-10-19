#include<bits/stdc++.h>
#define e endl
#define pb push_back
#define ll long long
#define speed(); ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
// constraints 
//n<=10^5 
//q<=10^5
// l<=r<=n-1
//Tc
// O(n)+0(q)*(o(n)+0(n))
//10^5+10^5*2*10^5
// ~= 10^5+2(10^10)
int main()
{
    speed();
    //Write your code here 
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a) //O(n)
        cin>>i;
    int q; cin>>q;
    while(q--) //0(q)
    {
         int x,y,z;
         cin>>x>>y>>z;
         for(int i=x;i<=y;i++) //o(n)
         {
            a[i]+=z;
         }
        for(auto i:a) //o(n)
            cout<<i<<" ";
        cout<<e;
    }

    return 0;
}