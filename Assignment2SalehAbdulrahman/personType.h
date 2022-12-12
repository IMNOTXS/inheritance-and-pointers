//personType.h

#include <string>

using namespace std;

class personType
{
public:
	void print() const;
	//Function to output the first name and last name


	void setName(string first, string last);


	string getFirstName() const;


	string getLastName() const;


	personType(string first = "", string last = "");


private:
	string firstName; //variable to store the first name
	string lastName;  //variable to store the last name
};
