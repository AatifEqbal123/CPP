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

int getTwoIntsFactorial(int n, int c) {
    pair<char, int> bigger;
    pair<char, int> smaller;
    int nFact = 1;
    int cFact = 1;
    
    if (n > c) {
        bigger = {'n', n};
        smaller = {'c', c};
    } else {
        bigger = {'c', c};
        smaller = {'n', n};
    }
    
    for(int i = 0; i<=bigger.second; i++) {
        if(i <= smaller.second) {
            
}

int main() {
  myfunction();  
  int input;
  cout<<"enter number for sumOfDigits ";
  cin>>input;
  cout<<sumOfDigits(input);
  return 0;
}

void myfunction() {
    cout<<"definition later"<<endl;
    return;
}