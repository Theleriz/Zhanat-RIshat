#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char symbol; //char looking for
	int amount = 0;//how will be amount of symbol
	int counter = 0;//for count how much char synbol we have
	cin >> str >> symbol >> amount;
	for (int i = 0; i < str.length(); i++) {
		//checking of whole char in str and symbol 
        if (str[i] == symbol) {
			counter++;
		}
	}
    //cout answer
	if (amount == counter) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}