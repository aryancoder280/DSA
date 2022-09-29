#include<iostream>
#include<vector>
using namespace std;
int main() {
    
    string a,b = "";
    cin>>a;
    int curr = 0,next=0;
    while(next<a.size()) {
        while(next<a.size() && a[curr] == a[next]) {
            next++;
        }
        char diff = next - curr + '0';
        if(diff != '1'){
            b += a[curr];
            b = b + diff;
        }
        else
        {
            b += a[curr];
        }
        curr = next;
    }
   cout<<b<<endl;
}