#include <iostream>
#include <cmath>
using namespace std;


int main() {

	string name = "Matthew";
	int age = 28;
	string freePizza[3] = { "Pizza1", "Pizza2", "Pizza3" };


	string *pName = &name;
	int *pAge = &age;

	string* pFreePizza = freePizza;

	cout << pName << "\n";
	cout << pAge << "\n";
	cout << pFreePizza << "\n";
	
	

	return 0;
}