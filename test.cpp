// homework
// try find nth fibonaci and prime numbers from 1 to n
//figure out how to find if a number is power of 2 without any loop. 
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 33;

    if (isPowerOfTwo(n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}