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
    int n,m;cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; ++i)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int prefixSum[n][m]={0};
    int sum=0;

    //create the prefix array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            prefixSum[i][j]=a[i][j];
            if((i-1)>=0) prefixSum[i][j]+=prefixSum[i-1][j];
            if((j-1)>=0) prefixSum[i][j]+=prefixSum[i][j-1];
            if((i-1)>=0 && (j-1)>=0) prefixSum[i][j]-=prefixSum[i-1][j-1];
            
        }


    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<prefixSum[i][j]<<" ";
        }
        cout<<e;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int i1,j1,i2,j2;
        cin>>i1>>j1>>i2>>j2;                                                    
                    if(j1-1<=0)
                    {
                        cout<<prefixSum[i2][j2]-prefixSum[i1-1][j2]<<e;
                    }
                    if(i1-1<=0){
                        cout<<prefixSum[i2][j2]-prefixSum[i2][j1-1]<<e;
                    }
                    if((i1-1<=0) && (j1-1<=0))
                    {
                        cout<<prefixSum[i2][j2]<<e;
                    }

}
    return 0;
}




 