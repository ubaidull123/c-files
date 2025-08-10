#include <iostream>
using namespace std; 

int main() {
    int number ,i = 5;
    
    number = (2 * ++i) + (2 * i++);

    
        cout << i << endl;
        cout << number << endl;
    
    return 0;
}
