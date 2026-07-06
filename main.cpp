#include <iostream>
#include <string>

using namespace std;

double ascii_calc(string a) {
	double ans;
	string rough;
	int length = a.length();
	for(int i = 0; i<length; i++) {
		int value = static_cast<int>(a[i]);
		string toAdd = to_string(value);
		rough+=toAdd;
		cout<<rough<<endl;
	}
	ans = stod(rough);
	return ans;
}


int main() {
	
	// Data types
	
	int a = 12.5;
	float b = 2.5;
	int c = a/b;
	float d = a/b;
	cout<<"classic a/b "<<a/b<<endl;
	cout<<"int c "<<c<<endl;
	cout<<"int d "<<d<<endl;
	
		
	// characters
	// string to ASCII value calculator like "Andrew" to charcters
	string str;
	cout<<"please enter your string ";
	cin>>str;
	double ans = ascii_calc(str);
	cout<<"\n for your string provided"<<endl;
	cout<<str<<" : "<<ans<<endl;
	
	// paractice probelm
	char input;
	cout<<"Please enter your characer ";
	cin>>input;
	cout<<"your input is "<<input<<endl;
	int comparable = (int)input;
	
	if(comparable >= 65 and comparable<=90) {
	    cout<<"your character is upercase"<<endl;
	} else if (comparable >= 97 and comparable <= 122) {
	    cout<<"your character is lowercase"<<endl;
	} else {
	    cout<<"The character is  neither upper case nor lowercase, it might be a special character"<<endl;
	} 
		
}