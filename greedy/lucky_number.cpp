#include<bits/stdc++.h>
using namespace std; 
int sum, arr[1000], res = 0;

void Try(int i, int N){
    for (int j = 0; j<=1; j++){
        arr[i] = j;
        if (i==N-1){
            int tmp = 0;
            for (int l = 0; l<N; l++){
                if (arr[l] == 0){
                    tmp += 4;
                }
                else{
                    tmp += 7;
                }
            }
            if (tmp == sum){
                int out = 0;
                for (int l = 0; l<=N-1; l++){
                    if (arr[l] == 0){
                        out = out*10 + 4;
                    }
                    else{
                        out = out*10 + 7;
                    }
                }
                if(out < res ){
                    res = out;
                }
            }
        }
        else{
            Try(i+1, N);
        }
    }
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        cin>>sum;
        res = 1e6;
        int number_char = sum/9 + 1;
        Try(0, number_char);
        if (res == 1e6){
            cout<<-1<<endl;
        }
        else{
            cout<<res<<endl;
        }
        // cout<<res<<endl;

    }
    
}