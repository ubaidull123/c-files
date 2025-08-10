#include <iostream>
using namespace std;

int main() {
    int lines, num = 2;
    cout << "Please enter the no of lines: ";
    cin >> lines;

    for (int i = 1; i <= lines; i++) 
    { 
        for (int space = 1; space <= lines - i; space++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) { 
            bool isPrime = true;
            for (int k = 2; k <= num / 2; k++) {
                if (num % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << num << " ";
                num++; 
            } else {
                num++; 
                j--;   
            }
        }
        cout << endl; 
    }

    return 0;
}
