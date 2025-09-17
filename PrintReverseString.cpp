//Ayush Yadav
//24070123028

#include <iostream>
using namespace std;

void print_rev(const char* str) {
    if (*str != '\0') {
        print_rev(str + 1);     
        cout << *str;           
    }
}

int main() {
    const char* text = "Hello";
    cout << "Original string: " << text << endl;
    cout << "Reversed string: ";
    print_rev(text);
    cout << endl;
    return 0;
}

/*Output
Original string: Hello
Reversed string: olleH
*/
