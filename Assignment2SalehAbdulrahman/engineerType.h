#include <string>
#include "personType.h"




class engineerType :public personType
{
public:
	void print() const;
	void setid(string id);
	string getid() const;

	void setspecialty(string specialty);
	string getspecialty() const;
	engineerType(string id = " ", string specialty = " ");





private:
	string id;
	string specialty;
};
