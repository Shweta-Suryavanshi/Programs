//to calculate the vowels present in the given string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int count_vowels(string s)
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)//(int i=0;i<s.size();i++)
    {
    if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    {
        count++;
    }
    }
    return count;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<count_vowels(s);
}