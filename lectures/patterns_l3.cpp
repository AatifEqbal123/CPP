#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // Square pattern
    int rowsColumns = 5; //both are same bcvause of square
    for(int i = 1; i<=rowsColumns; i++ ) {
        for(int j = 0; j <= rowsColumns; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n";
    
    // right triangle pattern
    
    int n = 5; //rows
    int m = 4; //columns
    for(int i =1; i <= n; i++) {
       for(int j = 1; j <= i; j++) {
           cout<<"*";
       } 
       cout<<endl;
    }
    
    // inverse right triangle pattern
    
    for(int i = 1; i <= n; i++) {
       for(int j = 5; j >= i; j--) {
           cout<<"*";
       }
       cout<<""<<endl;
    }
    
    cout<<"\n";
    
    // highest of the array
    int arr[5] = {9,2,7,6,3};
    int highest = 0;
    for(int i : arr) {
        if(i >= highest) {
            highest = i;
        } 
    }
    cout<<highest<<endl;
    return 0;
}