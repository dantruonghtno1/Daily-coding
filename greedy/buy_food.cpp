#include<bits/stdc++.h>
using namespace std;

int main (){
    int T,n,s, m; 
    cin>>T;
    while (T--)
    {
        cin>>n>>s>>m;
        int number_sundays = s/7;
        int total_can_buy = (s - number_sundays) * n;
        int total_need = s * m; 

        if (total_can_buy < total_need){
            cout<<-1<<endl;
        }
        else{
            for (int i = 0; i<= (s - number_sundays); i++){
                if (n*i>=total_need){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    
}