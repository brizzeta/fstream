#include "Directory.h"

Directory::Directory(string val_firm_name, string val_owner, string val_number, string val_address, string val_occupation) {
	firm_name = val_firm_name;
	owner = val_owner;
	number = val_number;
	address = val_address;
	occupation = val_occupation;
}

void Directory::Init() {
    ofstream out("Text.txt", ios::app);

    if (out.is_open())
    {
        // Сохранение данных в файл
        out << firm_name << endl
            << owner << endl
            << number << endl
            << address << endl
            << occupation << endl << endl;

        out.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }
}

void Directory::Print() {
    Directory temp;
    ifstream in("Text.txt");

    while(!in.eof()) {
        in >> temp.firm_name >> temp.owner >> temp.number >> temp.address >> temp.occupation;

        cout << "Firm name: " << temp.firm_name << endl
            << "Owner name: " << temp.owner << endl
            << "Number: " << temp.number << endl
            << "Address: " << temp.address << endl
            << "Occupation: " << temp.occupation << endl << endl;
    };
    in.close();
}

void Directory::Find_Firm_Name(string val_firm_name) {
    Directory temp;
    ifstream find("Text.txt");

    while (!find.eof()) {
        find >> temp.firm_name >> temp.owner >> temp.number >> temp.address >> temp.occupation;

        if (val_firm_name == temp.firm_name) {
            cout << "Firm name: " << temp.firm_name << endl
                << "Owner name: " << temp.owner << endl
                << "Number: " << temp.number << endl
                << "Address: " << temp.address << endl
                << "Occupation: " << temp.occupation << endl << endl;
        }
    };
    find.close();
}

void Directory::Find_Owner(string val_owner) {
    Directory temp;
    ifstream find("Text.txt");

    while (!find.eof()) {
        find >> temp.firm_name >> temp.owner >> temp.number >> temp.address >> temp.occupation;

        if (val_owner == temp.owner) {
            cout << "Firm name: " << temp.firm_name << endl
                << "Owner name: " << temp.owner << endl
                << "Number: " << temp.number << endl
                << "Address: " << temp.address << endl
                << "Occupation: " << temp.occupation << endl << endl;
        }
    };
    find.close();
}

void Directory::Find_Number(string val_number) {
    Directory temp;
    ifstream find("Text.txt");

    while (!find.eof()) {
        find >> temp.firm_name >> temp.owner >> temp.number >> temp.address >> temp.occupation;

        if (val_number == temp.number) {
            cout << "Firm name: " << temp.firm_name << endl
                << "Owner name: " << temp.owner << endl
                << "Number: " << temp.number << endl
                << "Address: " << temp.address << endl
                << "Occupation: " << temp.occupation << endl << endl;
        }
    };
    find.close();
}

void Directory::Find_Address(string val_address) {
    Directory temp;
    ifstream find("Text.txt");

    while (!find.eof()) {
        find >> temp.firm_name >> temp.owner >> temp.number >> temp.address >> temp.occupation;

        if (val_address == temp.address) {
            cout << "Firm name: " << temp.firm_name << endl
                << "Owner name: " << temp.owner << endl
                << "Number: " << temp.number << endl
                << "Address: " << temp.address << endl
                << "Occupation: " << temp.occupation << endl << endl;
        }
    };
    find.close();
}

void Directory::Find_Occupation(string val_occupation) {
    Directory temp;
    ifstream find("Text.txt");

    while (!find.eof()) {
        find >> temp.firm_name >> temp.owner >> temp.number >> temp.address >> temp.occupation;

        if (val_occupation == temp.occupation) {
            cout << "Firm name: " << temp.firm_name << endl
                << "Owner name: " << temp.owner << endl
                << "Number: " << temp.number << endl
                << "Address: " << temp.address << endl
                << "Occupation: " << temp.occupation << endl << endl;
        }
    };
    find.close();
}