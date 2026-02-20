// homework
// try find nth fibonaci and prime numbers from 1 to n


// binary to decimal

#include <bits/stdc++.h>
using namespace std;

int binToDecimal (int num){
    int decimal = 0;
    int power = 1;

    while(num > 0){
        int remainder = num % 10;
        decimal += remainder*power;

        //number update
        num = num / 10;
        //power update
        power = power * 2;
    }
    return decimal;
}

int main() {
    cout<<binToDecimal(1000);

    return 0;
}