#include <iostream>
#include <string>
using namespace std;

void decToHex(int n)
{
    
    string hexaDeciNum[100];
      
    int i = 0;
    while (n != 0) {
                int temp = 0;
        temp = n % 16;
 
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}
int main() {
	int a;
	cin >> a;
    decToHex(a);

}