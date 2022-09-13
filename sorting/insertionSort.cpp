#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&v,int n){

    for(int i=0;i<n;i++){
        int val = v[i];
        int j=i;
        while(j>0){
            if(v[j]<v[j-1]){
                swap(v[j],v[j-1]);
            }
            else
            {
                break;
            }
            j--;
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
    insertionSort(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}