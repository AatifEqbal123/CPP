#include <iostream>
#include <string>
#include <array>
#include <cmath>

using namespace std;

int main()
{
    //While loop
    int x = 0;
    while (x < 5)
    {
        cout << "x : " << x << endl;
        x++;
    }

    //do-while
    do
    {
        cout << "do-while" << endl;
        x++;
    } while (x < 0); // False statement but once do

    // for loop

    for (int i = 0; i < 10; i++)
    {
        cout << "for loop" << endl;
        i++;
    }

    // Multiplication example

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << "'s Table : " << j * i << endl;
        }
        cout << "\n"
             << endl;
    }

    // for-each

    int iterable[5] = {1, 2, 3, 4, 5};
    for (int index : iterable)
    {
        cout << index << " squared : " << index * index << endl;
    }

    // Factorial calculator
    int n;
    cout << "enter number please ";
    cin >> n;
    long long int result = 1;

    for (int i = 1; i <= n; i++)
    {
        if (n == 0)
        {
            break;
        }
        else
        {
            result *= i;
        }
    }

    cout << n << " 's factorial " << result << endl;

    // Fibonacci series
    int input;
    cout << "enter fibonacci series' n";
    cin >> input;
    array<int, 2> lasts = {};

    for (int i = 0; i <= input; i++)
    {
        if (i == 1)
        {
            lasts.back() = 0;
            lasts.front() = 1;
            int printable = lasts.back() + lasts.front();
            cout << printable << endl;
        }
        else
        {
            int printable = lasts[0] + lasts[1];
            lasts.back() = lasts[0];
            lasts.front() = printable;
            cout << printable << endl;
        }
    }

    // Prime number checker
    int m;
    cout << "enter number for prime validation ";
    cin >> m;
    bool isPrime = true;
    
    if(m <=1) {
        cout<<"nor prime neither composite";
        } else {
            int rootM = sqrt(m);
        for(int i = 2; i<=rootM; i++) {
                isPrime = (!(m%i == 0));
                break;
        }
        }
    cout << isPrime<<endl;

    // Fizz buzz
    for (int i = 1; i <= 20; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "Fizz Buzz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }

        else
        {
            cout << i << endl;
        }
    }

    return 0;
}