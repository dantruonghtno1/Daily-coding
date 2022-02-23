#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >>T;
    while (T--)
    {   
        int k;
        cin>>k;
        string s ;
        cin>>s;
        int d[1000] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            d[s[i]]++;
        }
        while (k--)
        {
            int max = -1, index = -1;
            for (int i = 0; i < s.length(); i++)
            {
                if (d[s[i]] > max)
                {
                    max = d[s[i]];
                    index = s[i];
                }
            }
            if (d[index]>0){
                d[index]--;
                // cout<<index;
            }
            // d[s[index]]--;
        }
        int out = 0;
        for (int i = 0; i <1000; i++)
        {   
            // cout<<d[i]<<" ";
            out += d[i]*d[i];
        }
        cout<<out<<endl;

        
    }
    
}