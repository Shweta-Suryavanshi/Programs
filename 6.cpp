//majority element
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt>n/2)
        {
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"No majority";
}