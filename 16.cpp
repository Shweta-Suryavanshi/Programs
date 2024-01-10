//to calculate the consonents present in the given string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void isAnagram(string a, string b)
{

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a==b)
    {
        cout<<"Yes Anagram";
    }
    else
    {
        cout<<"Not Anagram"<<endl;
    }
    
    
}
int main()
{
    string a,b;
    cin>>a>>b;
    
    isAnagram(a,b);
}