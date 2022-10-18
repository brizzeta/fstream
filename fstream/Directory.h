#include <fstream>
#include <iostream>
using namespace std;

#pragma once
class Directory
{
	string firm_name;
	string owner;
	string number;
	string address;
	string occupation;
public:
	Directory() = default;
	Directory(string val_firm_name, string val_owner, string val_number, string val_address, string val_occupation);
	void Init();
	void Print();
	void Find_Firm_Name(string val_firm_name);
	void Find_Owner(string val_owner);
	void Find_Number(string val_number);
	void Find_Address(string val_address);
	void Find_Occupation(string val_occupation);
};

