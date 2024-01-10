//program to calculate maximum profit from the given array
#include<iostream>
using namespace std;
int max_profit(int n,int arr[])
{
    int profit=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]>profit)
            {
                profit=arr[j]-arr[i];
            }
        }
    }
    return profit;
}
int main()
{
    int n;
    int result=0;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    result=max_profit(n,arr);
    cout<<"maximum profir is: "<<result;

}