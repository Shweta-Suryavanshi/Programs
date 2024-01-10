//to check whethre the program is palindrome or not
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void ispalindrome(string s)
{
    string original=s;
    reverse(s.begin(),s.end());
    if(original==s)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
}
int main()
{
    string s;
    getline(cin,s);
    ispalindrome(s);
}