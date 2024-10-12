#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n = 0;
    int shift;
    cin >> n;

    vector<int> arr1(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    cin >> shift;
    if (shift > 0) {
        for (int i = 0; i < n; i++) {
            arr2[(i + shift) % n] = arr1[i];
        }
        for (int i = 0; i < n; i++) {
            cout << arr2[i] << " ";
        }
    }
    else if (shift < 0) {
        for (int i = 0; i < n; i++) {
            arr2[(n + i + shift) % n] = arr1[i];
        }
        for (int i = 0; i < n; i ++ ) {
            cout << arr2[i] << " ";
        }
    }
    else {

        for (int i = 0; i < n; i ++ ) {
            cout << arr1[i] << " ";
        }
    }
    
    
    

    
}
