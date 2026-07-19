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
       
    
    return 0;
}