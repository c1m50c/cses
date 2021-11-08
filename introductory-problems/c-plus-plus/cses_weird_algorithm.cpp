#include <iostream>
using namespace std;


#define ll long long
ll n;


void solve() {
    cin >> n;
    cout << n << " ";

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (n * 3) + 1;
        }
        cout << n << " ";
    }
}


int main() {
    solve();
}