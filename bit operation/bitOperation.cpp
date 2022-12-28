#include<iostream>
#include<cmath>
using namespace std;

int getIthBit(int n, int i) {
    int mask = 1<<i;
    return (n&mask) > 0 ? 1:0;   
}
void setTheBit(int &n, int i) {

    int mask = 1<<i;
    n = n|mask;
}
void clearIthBit(int  &n, int i) {
    int mask = 1<<i;
    int requiredNum = ~(mask);
    n = n & requiredNum;
}
void updateIthBit(int &n, int i, int v) {
    clearIthBit(n,i);
    int mask = v<<i;
    n = n | mask;
}
void clearLastIBits(int &n, int i) {
    
}
int main() {

    int n = 5;
    int i;
    cin>>i;
    // cout<<getIthBit(n,i)<<endl;
    // setTheBit(n,i);
    // cout<<"after setting the bit:"<<n<<endl;
    // // clearIthBit(n,i);
    // // cout<<"after clearing the bit:"<<n<<endl;
    // int updateBit;
    // cin>>updateBit;
    // updateIthBit(n,updateBit,0);
    // cout<<"updated ith bit:"<<n<<endl;
    clearLastIBits(n,i);
}