#define task "cowfind"
#include<iostream>
#include<string>
using namespace std;
int main()
{
    freopen(task".INP","r",stdin);
    freopen(task".OUT","w",stdout);
    long long countCow=0,cow=0;
    string s;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if((s[i]=='(')&&(s[i+1]=='('))
            countCow++;
        if((s[i]==')')&&(s[i+1]==')'))
            cow+=countCow;
    }
    cout<<cow;
}
