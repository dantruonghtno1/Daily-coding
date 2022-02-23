#include<bits/stdc++.h>
using namespace std;

int S, D;
int last_sum, res , arr[1000]; 
void Try(int i, int n){
    for (int j = 0; j<=9; j++){
        if (i == 0 and j ==0){
            continue;
        }
        // if (i!=0 and j!=0){
        arr[i] = j;
        // }
        if(i==n-1){
            int tmp = 0; 
            for (int l = 0; l<n; l++){
                // cout<<arr[l]<<" ";
                tmp += arr[l];
            }
            // cout<<endl;
            if(tmp == S){
                // cout<<tmp<<endl;
                int out = 0;
                for (int l = 0; l<=n-1; l++){
                    out = out*10 + arr[l];
                    // cout<<arr[l]/;
                }
                // cout<<out<< endl;

                if (out < res){
                    res = out;
                }
            }
        }
        else{
            Try(i+1, n);
        }
        
    }
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        cin>>S>>D;
        res = 1e6;
        Try(0, D);
        cout<<res<<endl;
    }    
}