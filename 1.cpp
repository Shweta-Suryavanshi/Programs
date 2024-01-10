#include<iostream>
#include<limits.h>
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
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int second_max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max)
        {
            if(arr[i]>second_max)
            {
                second_max=arr[i];
            }
        }
    }
    cout<<second_max;

}