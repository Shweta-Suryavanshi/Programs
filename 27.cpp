//first non repeting interger using map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0,j=0;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mp ;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            cout<<arr[i]<<endl;
            return 0;
        }
    }
}