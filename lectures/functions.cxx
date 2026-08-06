#include <iostream>
#include <string>
#include <utility>

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

struct factorials
{
    string char;
    long long factorial;
}

getTwoIntsFactorial(int n, int c)
{
    int larger;
    int smaller;
    int largeIncrementer;
    int smallIncrementer;
    factorials l1 = {'n', n};
    factorials l2 = {'c', c};
    if (n > c)
    {
        larger = n;
        smaller = c;
    }
    else
    {
        larger = c;
        smaller = n;
    }

    if (l1.factorial > l2.factorial)
    {
        largeIncrementer = "l1";
        smallIncrementer = "l2";
    }
    else
    {
        largeIncrementer = "l2";
        smallIncrementer = "l1";
    }
    for (int i = 1; i <= larger; i++)
    {
        {
            if (smallIncrementer == "l1" and i <= l1.factorial)
            {
                l1.factorial *= i;
            }
            else if (smallIncrementer == "l2" and i <= l1.factorial)
            {
                l2.factorial *= i;
            }
        }
        {
            if (largeIncrementer == "l1")
            {
                l1.factorial *= i;
            }
            else
            {
                l2.factorial *= i;
            }
        }
    }
    
    return 
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

    // returning 0
    return 0;
}

void myfunction()
{
    cout << "definition later" << endl;
    return;
}