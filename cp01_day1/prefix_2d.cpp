#include<bits/stdc++.h>
#define e endl
#define pb push_back
#define ll long long
#define speed ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
// 1<= n,m<=1000
// 1<=Q<=10^8
// 0<=i1<=i2<=n-1
// 0<=j1<=j2<=m-1

// logic tc

// o(n*m)+
int main()
{
    speed
    //Write your code here 
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(auto i=0;i<n;i++) // o(n*m)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];

        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        //0(q)*0(n*m)
        //0(q*n*m)
        //0(10^8 * 10^3 *10^3 )
        int sum=0;
        int i1=0,j1=0,i2=0,j2=0;
        cin>>i1>>j1>>i2>>j2;
        for (int i = i1; i <= i2; ++i)
        {
            for (int j = j1; j <= j2; ++j)
                    {
                        // cout<<a[i][j]<<e;
                        sum+=a[i][j];
                    }    
    }
    cout<<sum<<e;
}
    return 0;
}