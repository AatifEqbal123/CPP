#include <iostream>

using namespace std;
int main () {
	   /* string a = "hello";
	string b = " world";
	string c = a + b;
	cout<<c<<endl;
	//cout<<c[5] + "Aatuf"<<endl;
	cout<<"\n"<<endl;
	cout<<4 + "Aatuf"<<endl;
		
	a = "changed";
	cout<<a<<endl;*/
	
	int p = 0412;
	int* pointer = &p;
	cout<<pointer<<endl;
	cout<<*pointer<<endl;
	
	// why message printing is orintinh enture hello world
	
	const char* message = "Hello world";
	cout<<message<<endl;
	cout<<*message<<endl;
	
	
}