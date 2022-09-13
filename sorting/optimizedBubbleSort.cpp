//O(N) in best case
#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&v, int n){

    bool swapped;
    for(int times=0;times<n;times++){
        for(int j=0;j<n-times-1;j++){
            if(v[j]>=v[j+1]){
                swapped = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!swapped){
            return;
        }
    }
    return;
}
int main(){

    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bubbleSort(v,n);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}