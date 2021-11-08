#include <vector>
#include <iostream>
using namespace std;


#define ll long long
ll n;


void solve() {
    cin >> n;
    
    vector<ll> values;
    values.push_back(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (n * 3) + 1;
        }
        values.push_back(n);
    }

    for (ll i : values) {
        cout << i << " ";
    }
}


int main() {
    solve();
}