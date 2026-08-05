#include <iostream>
#include <string>
#include <utility>

using namespace std;

void myfunction();

int sumOfDigits(int a) {
    int sum;
    while(a != 0)  {
        sum += (a%10);
        a/=10;
    }
    return sum;
}

// Two numbers Factorial calculator with specifying which factorial belongs to which one using pairs

auto getTwoIntsFactorial(int n, int c) {
    pair<pair<char, long long>, pair<char, long long>> facts;
    pair<char, long long>  largeFactorial;
    pair<char, long long>  smallFactorial;
    int smaller;
    
    if (n > c) {
        largeFactorial = {'n', n};
        smallFactorial = {'c', c};        
    } else {
        largeFactorial  = {'c', c};
        smallFactorial = {'n', n};
    }
    smaller = smallFactorial.second;
    
    for(int i = 1; i<=largeFactorial.second; i++) {
        if(i <= smaller) {
            smallFactorial.second*=i;
        }
    largeFactorial.second*=i;
    }  
    facts = std::make_pair(largeFactorial, smallFactorial);  
    return facts;
}

int main() {
  myfunction();  
  int input;
  cout<<"enter number for sumOfDigits ";
  cin>>input;
  cout<<sumOfDigits(input)<<endl;  
  pair<pair<char, long long>, pair<char, long long>> facts  = getTwoIntsFactorial(4, 2);
  cout<<facts.first.second<<endl;
  return 0;
}

void myfunction() {
    cout<<"definition later"<<endl;
    return;
}