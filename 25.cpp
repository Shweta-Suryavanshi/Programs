//program to check whether the given string is rotation of the other or not

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void is_rotation(string a, string b)
{
    string temp=a+a;

    auto index=temp.find(b);
    if(index != string::npos)
    {
        cout<<"yes they are rotation of the given string"<<endl;
    }
    else 
    {
        cout<<"no"<<endl;
    }

    
    
}
int main()
{
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    
    is_rotation(a,b);
}