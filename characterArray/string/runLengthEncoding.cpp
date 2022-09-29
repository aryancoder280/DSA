#include<iostream>
#include<vector>
using namespace std;
int main() {
    
    string a,b;
    cin>>a;
    bool duplicate = false;
    int curr = 0,next=1;
    while(next<a.size()) {
        while(a[curr] == a[next]) {
            duplicate = !duplicate ? true : duplicate;
            next++;
        }
        char diff = next - curr + '0';
        b = a[curr];
        b = b + diff;
        curr = next;
        next++;
    }
    if(duplicate)
    cout<<b<<endl;
    else
    cout<<a<<endl;
}