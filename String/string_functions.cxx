#include<iostream>
using namespace std;


int main() {

	std::string firstname = "kiruthika";
	std::string lastname = "uma maheswaran";
	std::string empty_string = "";
	// use + operator to concatenate 2 strings.
	cout << "Name = " << firstname + " " + lastname << endl;

	// use of at() function
	// returns an indexed character from a string
	cout << firstname.at(0) << endl;  // returns the 1st character in the string
	cout << firstname.at(firstname.length() - 1) << endl; // returns the last character in the string

	// lenght() amd size() 
	cout << firstname.length() << "," << firstname.size() << endl; // both behave the same length() is just a alias of size()

	// empty() function -> It returns 1 if the string is empty, otherwise 0.
	cout << firstname.empty() << endl;
	cout << empty_string.empty() << endl;

	// append() -> Used to append substrings or entire strings onto the current string.
	cout << firstname.append(lastname) << endl;

	//substr() function
	// returns the substring -> takes 2 argument substr(starting position , length of the substr)
	cout << lastname.substr(0, 3) << endl; // return "uma"
	cout << lastname.substr(0) << endl; //returns "uma maheswaran" // if the second argument is not mentioned, the function retur till the end

	return 0;
}
