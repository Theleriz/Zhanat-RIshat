#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int amountOfCapital = 0;
    int amountOfSmall = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 97 && str[i] <= 122){
            amountOfSmall += 1;
        }
        else if(str[i] >= 65 && str[i] <= 90){
            amountOfCapital += 1;
        }
    }
    cout << amountOfSmall << " " << amountOfCapital;
}