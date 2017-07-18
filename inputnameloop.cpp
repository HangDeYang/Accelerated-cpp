#include<iostream>
#include<string>
using namespace std;

int main()
{
//ask for name
	cout<< "please input your name: ";

//read name
	string name;
	cin >> name;

//build the message to present
	string greeting = "hello, " + name + "!";

//blank	line
	int pad = 1;
//number of rows and cols to write
	int rows = pad * 2 + 1;
	string::size_type cols = greeting.size() + pad * 2 + 2;
//write a blank line
	cout<<endl;
//write rows
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		while (c != cols) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			} else {
				if (r ==0 || r == rows - 1 || 
				    c ==1 || c == cols - 1)
				cout<<"*";
			  else 
				cout<<" ";
			++c;
			}
		}
		cout << endl;
	}
	return 0;
}
