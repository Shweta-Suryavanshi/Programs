//replace a word in the sentence
#include<iostream>
using namespace std;
int main()
{
    
        String str = "the sky is blue";
        String str = str.split(" ");
        int n=str.length;
        for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    cout<<str;
    
    
}