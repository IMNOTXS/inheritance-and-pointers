
#include <iostream>
#include <string>
#include "engineerType.h"

using namespace std;



// member functions of set and get 

void engineerType::print() const
{
	cout << id << " " << specialty;
}
void engineerType::setid(string Id)
{
	id = Id;
}

void engineerType::setspecialty(string Specialty)
{
	specialty = Specialty;
}

string engineerType::getid() const
{
	return id;
}

string engineerType::getspecialty() const
{
	return specialty;
}

//constructor
engineerType::engineerType(string Id, string Specialty)

{
	id = Id;
	specialty = Specialty;
}




