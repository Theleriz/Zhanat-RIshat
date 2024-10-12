#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int cnt = 0;
    int a, b;
    cin >> a >> b;
    vector<int> arr(a * b); 
    vector<int> arr2(a * b); 
    vector<vector<int>> res(a, vector<int> (b, 0));
    for (int i = 0; i < (a * b); i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    if((a*b) % 2 == 0){
        
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            res[i][j] = arr[cnt];
            cout << arr[cnt] << " ";
            cnt++;
            
        }
        cout << endl;
    }
    // for(int i = 0; i < a; i++){
    //     for(int j = 0; j < b; j++){
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }    
    
}
    
