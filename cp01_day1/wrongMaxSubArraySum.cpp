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
/*    for(auto i:a)
        cout<<i<<" ";*/
    int sum=INT_MIN;
 for(int i=0;i<n;i++)
 {
    int temp=0;
    for(int j=i;j<i+k-1;j++)
    {
        int ct=0;ct++;
        if(ct<n)
        {
            // cout<<temp<<e;
            temp+=a[j];
            cout<<temp<<e;
        }
    }
    sum=max(sum,temp);
 }
    cout<<sum<<e;
    return 0;
}