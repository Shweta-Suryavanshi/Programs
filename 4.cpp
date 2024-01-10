//rorate to left
#include<iostream>
using namespace std;
void left_rotate(int arr[], int n)
{
    int save=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=save;
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