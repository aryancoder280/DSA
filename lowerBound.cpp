#include<iostream>
#include<vector>

using namespace std;

int lowerBound(vector<int>v,int val){

    int l=0,r = v.size()-1,ans=-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(v[mid] == val){
            ans = v[mid];
            break;
        }
        else if(v[mid]<val){
            ans = v[mid];
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return ans;
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
    int val;
    cin>>val;
    cout<<lowerBound(v,val);

}