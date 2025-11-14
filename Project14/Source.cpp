#include <iostream>
#include <string>
using namespace std;

class Pasport
{
protected:
	int number;
	string name;
	string surname;
	string dateOFBirth;
	string organics;
	string placeOfresidence;
	string ByWhomIssued;
public:
Pasport(){}
Pasport(int n, string na, string sur, string d, string o, string p, string b)
{
	number = n;
	name = na;
	surname = sur;
	dateOFBirth = d;

}
};

int main()
{

}