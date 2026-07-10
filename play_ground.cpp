#include <iostream>
#include <typeinfo>

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
	
	// Ascii value tests
		/*string a = "hello";
	char i = static_cast<char>(a[0]);
	string j;
	/*int  i = static_cast<int>(a[0]);
	string j = to_string(i);
	
	cout<<j<<endl;
	int rough = 
	string ans = static_cast<int>(rough);*/
	
	/*string name = "Aatif";
	cout<<*/
	
	/* string rough = "6597116105102";
	double ans = stod(rough);
	cout<<ans<<endl; */
	
	
	//ASCII
	
	
/*	cout<<"working with ascii values"<<endl;
	cout<<int('A')<<endl;
	char ch = '"A"';
	cout<<"Aa"+1<<endl; */
	//cout<<int("'A'")<<endl;
	//cout<<int('"A"')endl;
	//cout<<(int)str
	
	/* int age;
	cin>>age;
	cout<<"your age is : "<<age;
	cout<<(double)5/2<<endl; */
	/*double x = 2.4;
	if(typeid(x/2).name() == "double") {
	    cout<<"s"<<endl;
	}*/
	/*cout<<typeid(typeid(x/2).name())<<endl;*/
	
	/*string y;
	cin>>y;
	x = int(y);
	if(y.contains)*/
	
/*	string a = "Aatif";
	string n = "2.2";
	cout<<a[0]<<endl;
	cout<<(0.0>0)<<endl;
	cout<<(0.0<0)<<endl;
	cout<<(0.0 == 0)<<endl;
	cout<<stoi(n);*/
	
	cout<<"enter number ";
	int x;
	cin>>x;	
	string n = (x>0) ? "positive" : "negative";
	cout<<( x>0 ? "positive" : "negative")<<endl;
}