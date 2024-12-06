//安全系統
#include<iostream>
using namespace std;


unsigned long long bino(int n, int r) {
    unsigned long long ans = 1;
    for (int i = 1; i <= r; ++i) {
        ans *= n - i + 1;
        ans /= i;
    }
    return ans;
}

int main() {
    int n, a, b;
    cin>>n>>a>>b;
    cout<<bino(a+n, n)*bino(b+n, n);
    return 0;
}