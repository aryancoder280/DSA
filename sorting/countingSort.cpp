#include<iostream>
#include<vector>
using namespace std;

void countingSort(vector<int>&v, int n,int maximum){

    vector<int>count(maximum+1,0);
    for(int i=0;i<n;i++){
        count[v[i]]++;
    }
    int ind = 0;
    for(int i=0;i<maximum+1;i++){

        while(count[i]){
            v[ind++] = i;
            count[i]--;
        }
    }
    return;
}
int main(){

    int n;
    cin>>n;
    vector<int>v;
    int maximum = -1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        maximum = max(maximum,x);
    }
    countingSort(v,n,maximum);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}