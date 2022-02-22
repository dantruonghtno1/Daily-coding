#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; 
    cout<<"Enter the number of test cases: ";
    cin>>T;
    while (T--)
    {       
        string s;
        cin>>s;
        int d[1000]={0}, res = 0 ; 
        for (int i = 0; i < s.length(); i++)
        {
            d[s[i]]++;
            if (res < d[s[i]])
                res = d[s[i]];
        }
        if (s.length()%2 == 0 and res - 1 <= s.length() - res)
            cout<<1;
        else if(s.length()%2 == 1 and res <= s.length()/2 + 1)
            cout<<1;
        else
            cout<<-1;

    }
    
}