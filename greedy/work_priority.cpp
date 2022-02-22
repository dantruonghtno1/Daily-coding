#include<bits/stdc++.h>
using namespace std;

bool sortbyCond(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main () {
    int T;
    cout<<"Enter the number of test cases: ";
    cin >> T;

    int N;
    cout<<"Enter the number of works: ";
    cin >> N;
    int arr_1[N], arr_2[N];
    for (int i = 0; i < N; i++) {
        cin >> arr_1[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> arr_2[i];
    }
    vector<pair <int, int>> v;
    for (int i = 0; i < N; i++) {
        v.push_back(make_pair(arr_1[i], arr_2[i]));
    }
    sort(v.begin(), v.end(), sortbyCond);
    // for (int i = 0; i < N; i++) {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    int count = 0; 
    int end_time_prev = 0;
    for (int i = 0; i < N; i++) {
        if (v[i].first >= end_time_prev) {
            count++;
            end_time_prev = v[i].second;
        }

    }
    cout<<count<<endl;
    return 0;
}