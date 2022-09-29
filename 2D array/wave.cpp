#include<iostream>
#include<vector>

using namespace std;

vector<int> wave(vector<vector<int> >arr,int n,int m){

    vector<int>v;
    int i=0,j=m-1;
    while(j>=0){
        
        while(j>=0 && i<n){
            v.push_back(arr[i][j]);
            i++;
        }
        i--;
        j--;
        while(j>=0 && i>=0){
            v.push_back(arr[i][j]);
            i--;
        }
        i++;
        j--;

    }
    return v;
}
int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int> >v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    vector<int>ans = wave(v,n,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}