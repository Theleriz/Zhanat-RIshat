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
    //shifting for positve value of shift 
    if (shift > 0) {
        //rewriting the arr1 to  arr2 with shift
        for (int i = 0; i < n; i++) {
            arr2[(i + shift) % n] = arr1[i];
        }
        //printing the result
        for (int i = 0; i < n; i++) {
            cout << arr2[i] << " ";
        }
    }
    //shifting for negative value of shift
    else if (shift < 0) {
        //we use n for reverse the diraction of shifting 
        //because n - i is reverse of an array
        //rewriting the arr1 for arr2 with shift
        for (int i = 0; i < n; i++) {
            arr2[(n + i + shift) % n] = arr1[i];
        }
        for (int i = 0; i < n; i ++ ) {
            cout << arr2[i] << " ";
        }
    }
    //printing result if shift equal to 0
    else {
        //printing the result
        for (int i = 0; i < n; i ++ ) {
            cout << arr1[i] << " ";
        }
    }
    
    
    

    
}
