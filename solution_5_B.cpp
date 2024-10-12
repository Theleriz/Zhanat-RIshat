#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int amountOfCapital = 0; // for Capital char 
    int amountOfSmall = 0;// for Small char
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        // check if whole char is Small 
        if(str[i] >= 97 && str[i] <= 122){
            amountOfSmall += 1;
        }
        // check if whole char is Capital
        else if(str[i] >= 65 && str[i] <= 90){
            amountOfCapital += 1;
        }
    }
    cout << amountOfSmall << " " << amountOfCapital;
}