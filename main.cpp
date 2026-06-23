#include <iostream>
#include <string>

using namespace std;

int ascii_calc(string a) {
	double ans;
	string rough;
	int length = a.length();
	for(int i = 0; i<length; i++) {
		int value = static_cast<int>(a[i]);
		string toAdd = to_string(value);
		rough+=toAdd;
		
	}
	ans = stod(rough);
}


int main() {
	// characters
	// string to ASCII value calculator like "Andrew" to charcters
	string str;
	cout<<"please enter your string ";
	cin>>str;
	double ans = ascii_calc(str);
	cout<<"\n for your string provided"<<endl;
	cout<<str<<" : "<<ans<<endl;
	
}