#include <iostream>
#include <string>
using namespace std;

class Passport
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
	Passport() { number = 0; }
Passport(int n, string na, string sur, string d, string o, string p, string b)
{
	number = n;
	name = na;
	surname = sur;
	dateOFBirth = d;
	organics = o;
	placeOfresidence = p;
	ByWhomIssued = b;
}
void SetNumber(int n)
{
	number = n;
}
int GetNuber()
{
	return number;
}
void SetName(string na)
{
	name = na;
}
string GetName()
{
	return name;
}
void SetSurname(string sur)
{
	surname = sur;
}
string GetSurname()
{
	return surname;
}
void SetDateOFBirth(string d)
{
	dateOFBirth = d;
}
string GetDateOFBirth()
{
	return dateOFBirth;
}
void Setorganics(string o)
{
	organics = o;
}
string Getorganics()
{
	return organics;
}
void SetplaceOfresidence(string p)
{
	placeOfresidence = p;
}
string GetplaceOfresidence()
{
	return placeOfresidence;
}
void SetByWhomIssued(string b)
{
	ByWhomIssued = b;
}
string GetByWhomIssued()
{
	return ByWhomIssued;
}
void Input()
{
	cin >> number;
	cin >> name;
	cin >> surname;
	cin >> dateOFBirth;
	cin >> organics;
	cin >> placeOfresidence;
	cin >> ByWhomIssued;
}
void Print()
{
	cout << "Number: " << number << "\nName: " << name << "\nSurname: " << surname << "\nDateOFBirth: " << dateOFBirth << "\norganics: " << organics << "\nplaceOfresidence: " << placeOfresidence << "\nByWhomIssued: " << ByWhomIssued << endl;
}
};
class ForeignPassport : Passport 
{
	string Visa;
	string SerialNumber;
public:
	ForeignPassport(int n, string na, string sur, string d, string o, string p, string b,string v,string s)
	{
		number = n;
		name = na;
		surname = sur;
		dateOFBirth = d;
		organics = o;
		placeOfresidence = p;
		ByWhomIssued = b;
		Visa = v;
		SerialNumber = s;
	}
	void SetVisa(string v)
	{
		Visa = v;
	}
	string GetVisa()
	{
		return Visa;
	}
	void SetSerialNumber(string s)
	{
		SerialNumber = s;
	}
	string GetSerialNumber()
	{
		return SerialNumber;
	}
	void Input()
	{
		Passport::Input();
		cin >> Visa;
		cin >> SerialNumber;
	}
	void Print()
	{
		Passport::Print();
		cout << "Visa: " << Visa << "\nSerial Number: " << SerialNumber << endl;
	}
};
int main()
{
	Passport obj1(123456789, "Ivan", "Petrov", "14.03.1998", "Ukrain", "Odesa", "Ministry of Internal Affairs");
	obj1.Print();
	obj1.Input();
	obj1.Print();
	cout << endl;
	ForeignPassport obj2(984321, "Artem", "Kravchenko", "03.11.2002", "USA", "California", "Department of Internal Affairs", "Poland", "423557970");
	obj2.Print();
	obj2.Input();
	obj2.Print();
}