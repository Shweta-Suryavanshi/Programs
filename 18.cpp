//Convert into upper case
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void intoupper(string a)
{
    int sum=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(!(a[i]>='A' && a[i]<='Z'))
        {
            a[i]=a[i]-32;
        }
    }
    cout<<a;
}
int main()
{
    string a;
    cin>>a;
    
    intoupper(a);
}