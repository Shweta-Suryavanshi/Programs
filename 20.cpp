//to convert small to upper
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void toggle(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
        else
        {
            a[i]-=32;
        }
    }
    
    cout<<a;
}
int main()
{
    string a;
    cin>>a;
    
    toggle(a);
}