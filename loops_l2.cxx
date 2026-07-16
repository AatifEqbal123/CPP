#include <iostream>
#include <string>
#include <array>

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
            cout<<printable<<endl;
        }
        else
        {
            int printable = lasts[0] + lasts[1];
            lasts.back() = lasts[0];
            lasts.front() = printable;
            cout << printable << endl;
        }
    }

    return 0;
}