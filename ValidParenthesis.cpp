// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ cod
    string s="({)}";
    stack<char> st;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                cout<<"Not a Valid Parenthsis\n";
                return 0;
            }
            else
            {
                char temp=st.top();
                if((s[i]=='}'&&temp=='{')||(s[i]==')'&&temp=='(')||(s[i]==']'&&temp=='['))
                {
                    st.pop();
                }
            }
        }
    }
    if(st.empty())
    cout<<"Valid\n";
    else
    cout<<"Not a valid\n";

    return 0;
}
