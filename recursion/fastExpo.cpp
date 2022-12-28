#include<iostream>
using namespace std;

int power(int base, int exp) {
    if(exp<=0) {
        return 1;
    }
    else {
        if(exp&1) {
            return base * power(base,exp-1);
        }
        else {
            return power(base*base,exp/2);
        }
    }
}
int main() {

    int base,exp;
    cin>>base>>exp;
    cout << power(base,exp)<<endl;

    return 0;
}