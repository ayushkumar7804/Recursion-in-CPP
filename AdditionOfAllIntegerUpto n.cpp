//Ayush Yadav
//24070123028

#include <iostream>
using namespace std;

int sumUp(int n) {
    if (n <= 1)
        return 1;
    else
        return n + sumUp(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than 0." << endl;
    } else {
        int result = sumUp(n);
        cout << "Sum of integers up to " << n << " is: " << result << endl;
    }

    return 0;
}

/*Output:-
Enter a positive integer: 5
Sum of integers up to 5 is: 15
*/
