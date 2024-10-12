#include <iostream>
#include <string>
using namespace std;

int main() {
	string Str;
	string copyPasteStr;//Str for check
	cin >> Str >> copyPasteStr;
	int lenghtOfcopyPasteStr = copyPasteStr.length();//lenght of copyed Str
	int lenghtOfStr = Str.length();//lenght of Str
	//cheking for can we have copyed Str by operating Copy-And-Paste Str
    if ((lenghtOfcopyPasteStr % lenghtOfStr) == 0) {
		
		string tmpStr = Str;// for adding Str
		for (int i = 0; i < (lenghtOfcopyPasteStr / lenghtOfStr) - 1; i++) {
			Str += tmpStr;
			
		}
        //if we can copy-and-pastr Str and have Str for check cout YES
		if (Str == copyPasteStr) {
			cout << "YES";
		}
        //if we can't cout NO
		else {
			cout << "NO";
		}
	}
	else {
		cout << "NO";
	}

}