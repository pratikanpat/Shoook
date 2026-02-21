//creation
int array_name[5];

//creation and defining
int marks[5] = {99, 84, 92, 99, 97};

//creation without it's size
int marks[] = {100, 99, 96, 98};


//to find the smallest from the array
#include <bits/stdc++.h>
using namespace std;

int smallest(int arr[], int size){

    int smallestIndex = 0;

    for(int i=1; i<size; i++){
        if(arr[i]<arr[smallestIndex]){
            smallestIndex = i;
        }
    }
    return smallestIndex;
}
int main() {
    int numbs[] = {50, 20, -30};
    int size = sizeof(numbs)/sizeof(int);

    int index = smallest(numbs, size);

    cout<<"Index: "<<index<<endl;
    cout<<"value: "<< numbs[index];

    return 0;
}



//linear search
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20 , 30 , 40};
    int size = sizeof(arr)/sizeof(int);
    int target = 30;

    cout<< linearSearch(arr, size, target);

    return 0;
}


//reverse an array
#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start <= end){ //condition
        swap(arr[start], arr[end]); //swap
        start++;  //increment
        end--;
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);

    reverseArr(arr, size); //calling function

    for(int i=0; i<size; i++){ //printing array
        cout<<arr[i];
    }
    cout<<endl;

    return 0;
}