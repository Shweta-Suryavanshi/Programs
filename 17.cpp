//to calculate the sum of integers in  a string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void IntSum(string a)
{
    int sum=0;
    for(int i=0;a[i]!='\0';i++)
    {
        sum+=a[i]-'0';
        
    }
    cout<<sum;
}
int main()
{
    string a;
    cin>>a;
    
    IntSum(a);
}