#include<iostream>
// #include "contact.cpp"
// #include "BTree.cpp"
// #include "Linklist.cpp"
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

class Linklist
{

public:
    Linklist *next;
    Contact *contact;

    Linklist(Contact *contact)
    {
        next = nullptr;
        contact = contact;
    }
};

class ContactLinklist
{

    // private :

public:
    Linklist *root;
    ContactLinklist()
    {

        root = NULL;
    }

    void addBTContact(Linklist *root, Contact *contact)
    {
        if (root == NULL)
        {
            root = new Linklist(contact);
        }
        else
        {
            addBTContact(root->next, contact);
        }
    }
};

class BTree
{
public:
    Contact *contact;
    BTree *left;
    BTree *right;
    BTree(Contact *contact)
    {
        this->contact = contact;
        left = NULL;
        right = NULL;
    }
};
class BTContact
{

public:
    BTree *root;
    BTContact()
    {
        root = NULL;
    }
    void addBTContact(Contact *contact)
    {
        BTree *newNode = new BTree(contact);
        root = newNode;
    }
    void displayBTContact(BTree *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->contact->name << endl << root->contact->phone << endl;
        displayBTContact(root->left);
        displayBTContact(root->right);
    }
};

int main() {

    ContactLinklist contactLinklist;
    Contact contact("ashu", "017", "sakib", "sakib", "sakib");
    contactLinklist.addBTContact(contactLinklist.root, &contact);

    BTContact btContact;
    btContact.addBTContact(&contact);
    btContact.displayBTContact(btContact.root);

    return 0;
}