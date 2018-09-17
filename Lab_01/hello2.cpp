#include <iostream>
#include <string>
using namespace std;
 int main(){
	string name;
	cout << "Please enter your name : "; //My name is DJ
	getline  (cin ,name);
	cout << "Welcome to CSE030, "<<name <<"!"<<endl;
	cout <<"Please enter your name:" ; // My name is Dongjun Cho
	getline (cin, name);
	cout <<"Welcome to CSE030, " << name << "!"<<endl;
	return 1;

}
