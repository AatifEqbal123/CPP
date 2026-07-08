#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

double ascii_calc(string a)
{
    double ans;
    string rough;
    int length = a.length();
    for (int i = 0; i < length; i++)
    {
        int value = static_cast<int>(a[i]);
        string toAdd = to_string(value);
        rough += toAdd;
        cout << rough << endl;
    }
    ans = stod(rough);
    return ans;
}

int main()
{
    // Data types

    int a = 12.5;
    float b = 2.5;
    int c = a / b;
    float d = a / b;
    cout << "classic a/b " << a / b << endl;
    cout << "int c " << c << endl;
    cout << "int d " << d << endl;

    // characters
    // string to ASCII value calculator like "Andrew" to charcters
    string str;
    cout << "please enter your string ";
    cin >> str;
    double ans = ascii_calc(str);
    cout << "\n for your string provided" << endl;
    cout << str << " : " << ans << endl;

    // paractice probelm
    char input;
    cout << "Please enter your characer ";
    cin >> input;
    cout << "your input is " << input << endl;
    int comparable = (int)input;

    if (comparable >= 65 and comparable <= 90)
    {
        cout << "your character is upercase" << endl;
    }
    else if (comparable >= 97 and comparable <= 122)
    {
        cout << "your character is lowercase" << endl;
    }
    else
    {
        cout << "The character is  neither upper case nor lowercase, it might be a special character" << endl;
    }

    //even or odd
    string y;
    cout<<"please enter a number to start ";    cin>>y;
    int x = stoi(y);
    
    if(y.find('.') != string::npos) {
        cout<<"it's a decimal value can't be categorised as even or odd"<<endl;
        if(x>0) {
            cout<<"positive"<<endl;
        } else if (x<0) {
            cout<<"negative";
        } else {
            cout<<"it's 0";
        }
    } else if(x>0) {        
        if(x%2 == 0) {
            cout<<"positive and even"<<endl;
        } else {
            cout<<"positive and odd"<<endl;
        }
    } else if(x<0) {
        if(x%2 == 0) {
            cout<<"negative and even"<<endl;
        } else {
            cout<<"negative and odd"<<endl;
        }
    } else {
        cout<<"it's 0 and even"<<endl;
    }
    
}