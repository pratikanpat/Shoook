//question is slightly changed : instead of returning true or false we are returning the pairs. 
#include <bits/stdc++.h>
using namespace std;

pair <int, int> linearSearch(int mat[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == key){
                return {i, j};
            }
        }
    }
    
    return {-1, -1};
}

int main() {
    int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    int key;
    cout << "Enter the key to search in matrix: "; 
    cin>>key;

    pair <int, int> result = linearSearch(matrix, rows, cols, key);

    cout<< result.first<< "," << result.second << endl;

    return 0;
} 