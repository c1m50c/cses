#include <vector>
#include <iostream>
using namespace std;


#define ll long long
ll n, sum = 0;


void solve() {
    cin >> n;
    
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
    }

    cout << n * (n + 1) / 2 - sum;
}


int main() {
    solve();
}