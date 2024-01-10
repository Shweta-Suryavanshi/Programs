//program to check whether the given string is rotation of the other or not

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool non_rep(string a)
{
    for(int i=0;i<a.size();i++)
    {
        
        for(int j=i+1;j<a.size();j++)
        {
            bool present=false;
            if(a[j]!=a[i])
            {
                if(a[j]==a[i])
                {
                    present=true;
                    break;
                }
            } 
        }
        
    }
    present=false;
}
int main()
{
    string a;
    bool ret=false;
    ret=getline(cin,a);
    if(ret==false)
    {
        cout<<
    }
    non_rep(a);
}