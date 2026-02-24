#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10 ;
    int* ptr1 = &a; //pointer storing address of a

    cout<<"address of a : "<< &a <<endl;
    cout<<"value stored in ptr1 : "<< ptr1 << endl;

    cout<<"Address of ptr1 : " <<&ptr1 <<endl;

    //pointer kaa pointer - pointer to pointer
    int** ptr2 = &ptr1; //to store the address of another pointer
    cout<<"Second pointr- ptr1's address : " <<ptr2;
    


    return 0;
}
