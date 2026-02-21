#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    cout << "Welcome to C++ programming." << endl;

    return 0;
} 


// WAF to reverse an integer n
#include <bits/stdc++.h>
using namespace std;


int reverse (int num){
    
    int reversed_num = 0;

    while(num > 0){
    
    //get remainder
    int rem = num % 10;
    reversed_num = reversed_num * 10 + rem;
    num = num/10;
    }

    return reversed_num;
}

int main() {
    cout<<reverse(123);

    return 0;
}

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