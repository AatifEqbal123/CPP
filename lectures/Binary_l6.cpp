#include <iostream>
#include <string>
#include <vector>

using namespace std;

// decimal to binary number
vector<int> getBinaryNum(int n) {
    vector<int> binary;
    while(n>=1) {
        int modulo = n%2;
        binary.push_back(modulo);
        n/=2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int getDecimalNum(int n) {
    int res = 0;
    for(int i = 0; n > 0; i++) {
        int currentDigit = n%10; 
        currentDigit<<=i; 
        res += currentDigit; 
        n/=10; 
    }
    return res;
}

int main() {
    // taking input
    int n;
    cout<<"enter n ";
    cin>>n;
    
    // couting binary and making inout for getDecimalFunction
    
    int deciFunctionInput = 0;    
    // Calling binary function;  
    vector<int> binary = getBinaryNum(n);
    for(int i : binary) {
        cout<<i;
        deciFunctionInput*=10;
        deciFunctionInput+=i;      
    }
   
    
    //calling Decimal Function
    int decimalOutput = getDecimalNum(deciFunctionInput);
    cout<<"\n"<<decimalOutput<<endl;
    bool isEqual = (decimalOutput == n) ? 1 : 0;
    cout<<isEqual;
}