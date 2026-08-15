#include <iostream>
#include <string>
#include <vector>

using namespace std;

// decimal to binary number
vector<int> getBinaryNum(int n) {
    vector<int> binary;
    while(n>1) {
        int modulo = n%2;
        n/=2;
        binary.push_back(modulo);
    }
    return binary;
}

int main() {
    vector<int> binary = getBinaryNum(4);
    for(int i : binary) {
        cout<<i<<",";
    }
}