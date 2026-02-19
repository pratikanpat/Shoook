//sum of digits of number
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){

    int digitSum = 0;

    while(num>0){
        int lastDigit = num % 10;
        num = num / 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    cout<<sumOfDigits(145);

    return 0;
}


//sum of digits of number
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){

    int digitSum = 0;

    while(num>0){
        int lastDigit = num % 10;
        num = num / 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    cout<<sumOfDigits(145);

    return 0;
}

// calculate the nCr binomial coeeficient for n and r

// formula nCr = n! / r!(n-r)!
//using factorial function

#include <bits/stdc++.h>
using namespace std;

int factorial(int n){

    int fact = 1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int factn = factorial(n);
    int factr = factorial(r);
    int factnmr = factorial(n-r);

    return factn/(factr*factnmr);
}

int main() {
    int n=8, r=2;
    cout<< nCr(n, r);

    return 0;
}
