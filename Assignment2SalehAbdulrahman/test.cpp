#include <iostream>
#include <string>
#include "personType.h"
#include "engineerType.h"


using namespace std;

int main()
{
	personType AI("Minecraft", "Al shatti");

	engineerType Enderman("1980", "Electrical Engineering");
	AI.print();
	cout << endl << endl;
	Enderman.print();
}