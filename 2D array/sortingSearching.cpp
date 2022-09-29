#include<iostream>
#include<vector>

using namespace std;

bool search(vector<vector<int> >v, int number,int i,int j) {

        if(v[i][j] == number)
            return true;
        else if(v[i][j]>number)
            return false;
        
        return search(v,number,i,j+1) || search(v,number,i+1,j);
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
    int number;
    cin>>number;
    cout<<search(v,number,0,0);
}