#include <iostream>

using namespace std;


class Contact {
public:

    string name;
    string phone;
    string email;
    string address;
    string description;
    Contact(string name, string phone, string email, string address, string description) {
        this->name = name;
        this->phone = phone;
        this->email = email;
        this->address = address;
        this->description = description;

    }

};