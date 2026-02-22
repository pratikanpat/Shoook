//printing the subarrays
#include <bits/stdc++.h>
using namespace std;

void subarray(int arr[], int size){
    for(int st = 0; st < size; st++){
        for(int end = st; end < size; end++){
            cout<<"Subarray:";
            for(int i = st; i <=end; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    subarray(arr, size);

    return 0;
}


//maximum subarray sum - Brute force O(n^2)
//creating all subarrays and by adding them to apply the max()

#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int size){
    int maxsum = 0;

    for(int st = 0; st < size; st++){
        int currSum = 0;

        for(int end = st; end < size; end++){
            currSum += arr[end];
            maxsum = max(currSum, maxsum);
        }
    }
    return maxsum;
}

int main() {
    int arr[] = {1, 2, -3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    cout<<maxSum(arr, size);

    return 0;
}


//maximum subarray sum - Kadane's algorithm
#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int size){
    int currSum = 0;                    //variables for current sum and max sum
    int maxSum = INT_MIN;

    for(int i = 0; i < size; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0){                //kadane's core - set sum to 0 if the current sum is already negative.
            currSum = 0;                //why to add larger negative if you want the maximum sum.... Common sense bhai.......
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {1, -2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    cout<<kadane(arr, size);

    return 0;
}