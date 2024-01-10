//to convert first letter to upper case
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void firstupper(string a)
{
    if(!(a[0]>='A'&& a[0]<='Z'))
    {
        a[0]-=32;
    }
    
    cout<<a;
}
int main()
{
    string a;
    cin>>a;
    
    firstupper(a);
}