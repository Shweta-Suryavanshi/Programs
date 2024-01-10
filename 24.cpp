//program to check whether the given pattern is present in string or not
//str: abcdeafabc
//pattern: abc
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void check_pattern(string a, string p)
{
    for(int i=0;i<a.size();i++)
    {
        if(p[0]==a[i])
        {
            int a_pointer=i;
            for(int j=0;j<p.size();j++)
            {
                if(p[j]!=a[a_pointer])
                {
                    break;
                }
                a_pointer++;
            }
            if(a_pointer==p.size()+i)
            {
                cout<<i<<"\t";
            }
            
        }
    }
    
}
int main()
{
    string a;
    string p="abc";
    getline(cin,a);
    
    check_pattern(a,p);
}