//program to sort the string 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void sorting(string s)
{
    sort(s.begin(),s.end());
    cout<<s;
}
int main()
{
    string s;
    getline(cin,s);
    sorting(s);
}