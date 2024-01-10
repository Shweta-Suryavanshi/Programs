//to reverse the string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void reverse(string s)
{
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
int main()
{
    string s;
    getline(cin,s);
    reverse(s);
}