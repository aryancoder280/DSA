#include<iostream>
#include<vector>
#include<stack>
#include <utility>
using namespace std;
 
int smallestRight(stack<pair<int,int> >&s, int val,int ind) {
    int diff = 0;
        while(!s.empty() &&  s.top().first >= val) {
            s.pop();
        }
        if(!s.empty()) {
            int b = s.top().second;
            diff = abs(ind - b);
        }
        s.push(make_pair(val,ind));
    return diff;
}
int smallestLeft(stack<pair<int,int> >&s, int val,int ind) {
    int diff = 0;
    int prevDiff = ind;
        while(!s.empty() &&  s.top().first >= val) {
            prevDiff = s.top().second;
            s.pop();
        }
        if(!s.empty()) {
            diff = abs(ind - prevDiff);
        }
        else {
            diff = abs(ind-0-1);
        }
        s.push(make_pair(val,ind));
    return diff;   
}
int getMaxArea(vector<int> hist){
    stack<pair<int,int> >s;
    
    int n = hist.size();
    vector<int>leftblock(n),rightblock(n);
    //rightblock finding next smallest
    s.push(make_pair(-1,hist.size()));
    for(int i=hist.size()-1;i>=0;i--) {
        int val = hist[i];
        rightblock[i] = smallestRight(s,val,i);
    }
    while(!s.empty()) {
        s.pop();
    }
    for(int i=0;i< hist.size();i++) {
        int val = hist[i];
        leftblock[i] = smallestLeft(s,val,i);
    }
    int ans = 0;
    for(int i=0;i<n;i++) {
        cout<<leftblock[i]<<" "<<rightblock[i]<<endl;
        int tot = (rightblock[i] + leftblock[i]) * hist[i];
        ans = max(tot,ans);
    }
    return ans;
}

int main() {
    int n = 7;
    vector<int>v;
    v.push_back(6);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    
    cout<<getMaxArea(v);
}