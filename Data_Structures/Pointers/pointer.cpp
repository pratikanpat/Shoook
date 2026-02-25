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


//understanding pass by value and reference
#include <bits/stdc++.h>
using namespace std;

void changeA(int a){  //pass by value
    a = 20;
}

int main() {
    int a = 10;

    changeA(a);

    cout<<"change in int main : "<< a << endl;  //10    

    return 0;
}

//reference
#include <bits/stdc++.h>
using namespace std;

void changeA(int* ptr){  //pass by reference
    *ptr = 20; //derefenrece ne actual value change keli
}

int main() {
    int a = 10;

    changeA(&a); //sent address

    cout<<"change in int main : "<< a << endl; //20

    return 0;
}



//second way of pass by reference is references(alias)
//where i send a but while receiving i use &b another name for the variable
#include <bits/stdc++.h>
using namespace std;

void changeM(int &b){ //alias
    b = 20;
}

int main() {
    int m = 10;

    changeM(m); 

    cout<<"change in int main : "<< m << endl; //20

    return 0;
}