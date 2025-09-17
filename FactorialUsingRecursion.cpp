// Ayush Yadav
// 24070123028


#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

/*Output
Enter a number: 5
Factorial of 5 is 120
  */
