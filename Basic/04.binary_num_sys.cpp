// Binary to decimal
#include <bits/stdc++.h>
using namespace std;

int deciToBinary (int decNum){
    int binary_ans = 0;
    int power = 1;

    while(decNum > 0){
        int remainder = decNum % 2;
        decNum = decNum / 2;

        //here binary number get added
        binary_ans += (power * remainder);

        //to increase the power
        power = power * 10;
    }

    return binary_ans;
}

int main() {
    cout<<deciToBinary(8);

    return 0;
}





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

