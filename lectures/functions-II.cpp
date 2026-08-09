#include <iostream>
#include <string>

using namespace std;

//Paractic3
bool isPrime(int n) {
    bool isPrime = true;
    int count = 0;
    for(int i = 1; i <= (n/2); i++) {
        if(n%i == 0) {
            count+=1;
        }
    }
    if(count > 2) {
        isPrime = false;
    }
    return isPrime;
}

// Fabonacci Nth term






int main() {
    
    // isPrime function
    int n;
    cout<<"enter n ";
    cin>>n;
    cout<<"Prime : "<<isPrime(n)<<endl;
}