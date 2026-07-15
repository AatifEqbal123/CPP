#include <iostream>
#include <string>

using namespace std;

int main() {    
    //While loop
    int x = 0;
    while(x<5) {
        cout<<"x : "<<x<<endl;
        x++;
    }
    
    //do-while
    do {
        cout<<"do-while"<<endl;
        x++;
    } while (x<0); // False statement but once do
    
    // for loop 
    
    for(int i = 0; i<10; i++) {
        cout<<"for loop"<<endl;
        i++;
    }
    
    // Multiplication example
    
    for(int i = 1; i<=3; i++) {
        for(int j =1; j<=10; j++) {
            cout<<i<<"'s Table : "<<j*i<<endl;
        }
        cout<<"\n"<<endl;
    } 
    
    // for-each
    
    int iterable[5] = {1,2,3,4,5};
    for (int index : iterable) {
        cout<<index<<" squared : "<<index*index<<endl;
    }
    
    // Factorial calculator
    int n;
    cout<<"enter number please ";
    cin>>n;
    long long int result = 1;
    
    for(int i = 1; i<=n; i++) {
        if(n == 0) {
            break;
        } else {
            result*=i;
        }        
    }
    
    cout<<n<<" 's factorial "<<result<<endl;
    
    
    return 0;
}