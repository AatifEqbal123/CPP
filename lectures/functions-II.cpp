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
    if(count >= 2) {
        isPrime = false;
    }
    return isPrime;
}

// Fabonacci Nth term

int getFabonacci(int n) {
    // declaring older and newer array
    int arr[2] = {0, 1}; // old, new    
    
    // loop for fabonacci
    for(int i = 1; i<=(n-2); i++) { 
        int old = arr[1]; 
        arr[1] += arr[0]; 
        arr[0] = old; 
    }    
    // returning
    return arr[1];
}

// list all primes to 100

void listAllPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (i > 2 and i % 2 == 0)
        {
            continue;
        }
        else if (isPrime(i) == 1)
        {
            cout << i << " , ";
        }
    }
}

int main() {
    
    // isPrime function
    int n;
    cout<<"enter n ";
    cin>>n;
    cout<<"Prime : "<<isPrime(n)<<endl;
    
    // get nth Fabonacci number    
    cout<<"nth Fabonacci : "<<getFabonacci(n)<<endl;
    // listAllPrimes
    listAllPrime(n);
}