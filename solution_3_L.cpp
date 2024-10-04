#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long m;
    cin >> n >> m;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int index = lower_bound(a.begin(), a.end(), m) - a.begin();

    cout << index << endl;

    return 0;
}
