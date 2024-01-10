//rorate to right
//if want to rorate k times then call the loop that many times
#include<iostream>
using namespace std;
void left_rotate(int arr[], int n)
{
    int save=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=save;
}
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
    left_rotate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}