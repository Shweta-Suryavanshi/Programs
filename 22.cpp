//program to remove vowels from the string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void remove_vowel(string a)
{
    string b="";
    for(int i=0;i<a.size();i++)
    {
        if(!(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'))
        {
            b=b+a[i];
        }
    }
    cout<<b<<endl;
    
}
int main()
{
    string a;
    getline(cin,a);
    
    remove_vowel(a);
}