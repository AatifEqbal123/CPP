#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <cstring>

using namespace std;

int main()
{
    // Square pattern
    int rowsColumns = 5; //both are same bcvause of square
    for (int i = 1; i <= rowsColumns; i++)
    {
        for (int j = 0; j <= rowsColumns; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    // right triangle pattern

    int n = 5; //rows
    int m = 4; //columns
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // inverse right triangle pattern

    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << "" << endl;
    }

    cout << "\n";

    // highests of the array
    // through linear search and loops
    int arr[4] = {6,4,8,3};
    int highest = 0;
    int secondHigh = 0;
    for (int i : arr)
    {
        if (i >= highest)
        {
            highest = i;
        }
    }
    { // second highest
        for (int j : arr)
        {
            if (j < highest && j >= secondHigh)
            {
                secondHigh = j;
            }
        }
    }

        cout <<"linear search "<< highest << endl;
        cout << secondHigh << endl;
        
        cout<<"\n";
        // through sorting
        
        int arrCopy1[4];
        memcpy(arrCopy1, arr, sizeof(arr));
                
        int a = sizeof(arr)/sizeof(arr[0]);
        sort(arr, arr+a, greater<int>());
        
       cout<<"sorting "<<arr[0]<<endl;
        cout<<arr[1]<<endl;
        
        
        // through binary search
        
       
        return 0;
    }