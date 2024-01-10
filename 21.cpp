//program to add two strings
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string addstr(string a, string b)
{
    string c;
    c=a+" "+b;
    //cout<<"string is: "<<c;
    return c;
}
int main()
{
    string a,b;
    string result;
    //cin>>a>>b;
    getline(cin,a);
    getline(cin,b);
    
    result=addstr(a,b);
    cout<<result;
}