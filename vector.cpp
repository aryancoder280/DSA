#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i] = x;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}