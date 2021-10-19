//Applied Prefix sum
#include<bits/stdc++.h>
#define e endl
#define pb push_back
#define ll long long
#define speed ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
// 0(n)+0(n)+0(Q)
// 2 * 0(n)+0(Q)
// 2 * 10^5+10^4
int main()
{
    speed
    //Write your code here 
    int n;
    cin>>n;
    int a[n];
    for(auto &i:a)
        cin>>i; 0(n)
    vector<int> preSum;
    int sum=0;
    for(auto i:a)
    { 
        sum+=i; 0(n)
        preSum.pb(sum);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r; 0(q);
        cin>>l>>r;
        if(l-1<0)
            cout<<preSum[r]<<e;
        else
            cout<<preSum[r]-preSum[l-1]<<e;
    }

    return 0;
}