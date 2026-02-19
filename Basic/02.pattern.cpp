//square pattern
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            cout<< j << " ";
        }
        cout<<endl;
        
    }
    

    return 0;
}


//Character pattern
// A B C D 
// A B C D 
// A B C D 
// A B C D 
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 4;

    for (int i = 0; i<n; i++){
        char ch = 'A' ;
        for(int j=0; j<n; j++){
            cout<<ch << " ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}


//123
//456
//789
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;

    int num = 1; //position of initialisation depends. Either to keep it inside loop of outside the loop - whether you want to restart it or caryon
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << num <<" ";
            num++;
        }  
        cout<<endl;
    }
    
    return 0;
}


// * 
// * * 
// * * * 
// * * * * 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for (int i=0; i < n; i++ ){
        for(int j=0; j < i+1; j++){
            cout<< "*" << " ";
        }
        cout<<endl;
    }
    
    return 0;
}


// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for(int i=0; i < n; i++){
        for(int j=0; j < i+1; j++){
            cout << (i+1) <<" ";
        }
        cout << endl;
    }

    return 0;
}

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for(int i=0; i < n; i++){
        for(int j=0; j < i+1; j++){
            cout << (j+1) <<" ";
        }
        cout << endl;
    }

    return 0;
}


// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for(int i=0; i < n; i++){
        for(int j=i+1; j >0; j--){
            cout << (j) <<" ";
        }
        cout << endl;
    }

    return 0;
}


// 1
// 23
// 456
// 78910
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int num=1;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    

    return 0;
}

// 1111
//  222
//   33
//    4
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int num=1;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){ //space
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<i+1;                 //wannna see magic add space after the number herre in this line
        }
        cout<<endl;
    }
    

    return 0;
}


//    1
//   121
//  12321
// 1234321
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    
    for(int i=0; i<n; i++){
        //spaces n-i-1
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        //frist triangle
        for(int j=1; j<=i+1; j++){ 
            cout<<j;
        }

         //second triangle
        for(int j = i; j>0; j--){
            cout<<(j);
        }
        cout<<endl;
    }
    

    return 0;
}

