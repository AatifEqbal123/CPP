#include <iostream>
#include <string>
#include <utility>
#include <tuple>

using namespace std;

void myfunction();

int sumOfDigits(int a)
{
    int sum;
    while (a != 0)
    {
        sum += (a % 10);
        a /= 10;
    }
    return sum;
}

/* Two numbers Factorial calculator with specifying which factorial belongs to which one using pairs

auto getTwoIntsFactorialPairs(int n, int c) {
    // Declarartion of pairs and variables
    pair<pair<char, long long>, pair<char, long long>> facts;
    pair<char, long long>  largeFactorial;
    pair<char, long long>  smallFactorial;
    int smaller;
    int larger;
    
    // selecting smaller and bigger 
    if (n > c) {
        largeFactorial = {'n', n}; 
        smallFactorial = {'c', c};
    } else {
        largeFactorial  = {'c', c};
        smallFactorial = {'n', n};
    }
    smaller = smallFactorial.second; 
    larger = largeFactorial.second; 
    
    // initializing factorial second value to 1
    largeFactorial.second = 1;
    smallFactorial.second = 1;
    
    // looping through bigger
    
    for(int i = 1; i<=larger; i++) {
        if(i <= smaller ) { 
            smallFactorial.second*=i;
        }
    largeFactorial.second*=i;
    }
   
        
    //returning pairs    
    facts = make_pair(largeFactorial, smallFactorial);  
    return facts;
} */

// get two integer's factorial using structure istead of complicated pairs; much cleaner

// creating structure of factorials lists
struct factorials
{
    char name;
    long long factorial;
};

// Function with tuple definition

auto getTwoIntsFactorial(int n, int c)
{
    // Declaring variables
    int larger;
    int smaller;
    factorials l1 = {};
    factorials l2 = {};
    factorials l3 = {};

    // Intialising variables after comparison
    if (n > c)
    {
        larger = n;
        smaller = c;
        l1 = {'n', 1};
        l2 = {'c', 1};        
    }
    else
    {
        larger = c;
        smaller = n;
        l1 = {'c', 1};
        l2 = {'n', 1};
    }

    // loop
    for (int i = 1; i <= larger; i++)
    {
        if (i <= smaller)
        {
            l2.factorial *= i;
        }
        
        l1.factorial *= i;
    }

    // return
    tuple<factorials, factorials> factorials(l1, l2);
    return factorials;
}


int main()
{
    // calling void one
    myfunction();

    // Taking input and calling for SumOfDigits
    int input;
    cout << "enter number for sumOfDigits ";
    cin >> input;
    cout << sumOfDigits(input) << endl;

    /* Pairs
  //Taking input and representing outout for getTwoIntsFactorialPairs
  
  int n;
  int c;
  cout<<"enter n ";
  cin>>n;
  cout<<"enter c ";
  cin>>c;
  // Calling and cout
  pair<pair<char, long long>, pair<char, long long>> facts  = getTwoIntsFactorialPairs(n, c); 
  
  cout<<facts.first.first<<": "<<facts.first.second<<endl;
  cout<<facts.second.first<<": "<<facts.second.second<<endl; */

    // calling getTwoIntsFactorial
    // input
    int n;
    int r;
    cout << "enter n ";
    cin >> n;
    cout << "enter r";
    cin >> r;

    // retreiving
    
    auto [l1, l2] = getTwoIntsFactorial(n, c);
    cout << l1.name << ": " << l1.factorial << endl;
    cout << l2.name << ": " << l2.factorial << endl; 

    // returning 0
    
    return 0;
}

void myfunction()
{
    cout << "definition later" << endl;
    return;
}