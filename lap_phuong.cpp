#include<bits/stdc++.h>
using namespace std;
map<long long, bool> check; 
int N, arr[25];
vector<int> character; 
long long res = 0;

void Try(int i, int n){
    for (int j = 0; j<= 1; j++){
        arr[i] = j;
        if (i==n-1){
            long long tmp = 0; 
            for (int l = 0; l<n; l++){
                if (arr[l] == 1){
                    tmp = tmp*10 + character[l];
                }
                
            }
            if (check[tmp]==true and tmp!=0 and res < tmp){
                res = tmp;
            }
        }
        else{
            Try(i+1, n);
        }
    }
}


int main(){
    for (long long i=0; i<=1000000; i++){
        check[i*i*i] = true;
    }
    int T;
    cin>>T;
    while (T--)
    {   
        int n; 
        cin>>n;
        character.clear();
        while (n!=0)
        {
            character.push_back(n%10);
            n/=10;
        }
        reverse(character.begin(), character.end());
        res = -1 ; 
        n = character.size();
        Try(0, n);
        cout<<res<<endl;

        
    }
    

}
