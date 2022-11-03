#include<iostream>
#include<vector>

using namespace std;

int sum(vector<vector<int> >v, int sr, int sc, int er, int ec) {

    int n = v.size();
    int m = v[0].size();
    cout<<n<<" "<<m<<endl;
   vector<vector<int> >colSum(n);
   vector<vector<int> >rowSum(m);
     
    for(int i=0;i<n;i++){
        int col = 0;
        for(int j=0;j<m;j++) {
            col+=v[i][j];
            colSum[i].push_back(col);
        }
    }
    for(int i=0;i<m;i++){
        int row = 0;
        for(int j=0;j<n;j++) {
            row += v[j][i];
            colSum[j].push_back(row);
        }
    }
    int sum2=0;
    if(sc == 0){
        sum2 = colSum[sr][]
    }
    return sum;
}
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int> >v(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    int sr,sc,er,ec;
    cin>>sr>>sc>>er>>ec;
    sum(v,sr,sc,er,ec);

    return 0;
}