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


string check(int a) {
    string res;
    if(a%2 == 0) {
        res = "even ";
    } else if (a%2 != 0) {
        res = "odd ";
    } else {
        res = "it's 0";
    }
    
    if(a>0) {
        res.append("positive");
    } else if (a<0) {
        res.append("negative");
    } 
    
    return res;
}

string parity(float a) {
    string res = "negative";
    if(a>0) {
        res = "positive";
    } else if (a == 0) {
        res = "it's 0";
    }
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

    //even or odd positive or not ?
    string y; // string for checking decimals
    cout<<"please enter a number to start ";    cin>>y;
    int x = stoi(y); //int variable
    bool isScam; // check for values like 0.00, 1.000, 1.00
    
    // Decimal check
    
    if(y.find('.') != string::npos) {
        cout<<"decimal detected"<<endl;
        //isScam check ex.[0.0, 1.000, 2.0]
        for(auto it = y.rbegin(); it != y.rend(); ++it) {
            if(*it == '.') {
                break;
            } else {
                isScam = (*it == '0');
                if(isScam == false) {
                    [&]() {
                        float temp = stof(y);
                        cout<<"decimal value, neitger even nor odd, "<<parity(temp)<<endl;
                    return;
                    }();
                }
            }
            
        }
        
        if(isScam == true) {
            [&]() {
                int temp = stoi(y);
                cout<<"actual value for your decimal : "<<temp<<" so results are,"<<endl;
                cout<<check(temp);
                return;
            }();
             //used function only one time for simplicity ither code follows if else ladder as commanded in paractice problem
        } else if(x>0) {
            cout<<"it's a decimal value can't be categorised as even or odd"<<endl;
            cout<<"positive"<<endl;
        } else if (x<0) {
            cout<<"it's a decimal value can't be categorised as even or odd"<<endl;
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
    
    
    return 0;
} // Done 

