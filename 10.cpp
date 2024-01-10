//program to count characters from the given input
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int count_char(string s)
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<count_char(s);
}