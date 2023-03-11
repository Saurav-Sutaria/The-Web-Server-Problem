#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a,vector<int> &b){
    if(a[0] == b[0]) return a[1] > b[1];
    return a[0] < b[0];
}
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("./input-small.txt", "r", stdin);
    // freopen("./output-small.txt", "w", stdout);
    // #endif

    #ifndef ONLINE_JUDGE
    freopen("./input-large.txt", "r", stdin);
    freopen("./output-large.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    
    vector<vector<int>> arr(t,vector<int>(3));

    for(int i=0;i<t;i++){
        cin>>arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    sort(arr.begin(),arr.end(),cmp);

    for(auto &v : arr){
        cout << v[0] <<"," << v[1] <<"," << v[2] << endl;
    }
}