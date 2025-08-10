#include <iostream>
using namespace std;

int main() {
    int count = 1; 

my_loop: 
    cout << "Hello World" << endl;
    count = count + 1 ; 
    if (count <= 5) {
        goto my_loop; 
    }

    return 0;
}
