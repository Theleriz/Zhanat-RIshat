#include <iostream>
#include <string>
using namespace std;

char toBig(char S) {
    //intOfS it is ascii code of s
    int intOfS = (int)S;
    //checking of if S is lower registr
    if (intOfS >= 97 && intOfS <= 122) {
        //return upper registr if S is lower register
        return (char)(intOfS - 32);
    }
    else {
        //else return S witout change
        return S;
    }
}

int main() {
    // string -> str
    string str;
    //inputr string
    cin >> str;
    //cheking of registr of all elements of str
    for (int i = 0; i < str.length(); i++) {
        str[i] = toBig(str[i]);
    }
    cout << str;
}