#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter number of elements\n";
    int n;
    cin>>n;
    cout <<"Enter the elements\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt=0;
    int candidate=arr[n/2];
    for(int i=0;i<n;i++)
    {
            if(arr[i]==candidate)
            {
                cnt++;
            }
    }
        if(cnt>(n/2))
        {
            cout<<"Majority element is "<<candidate;
        }
        else 
        {
            cout<<"no element";
        }
    

}