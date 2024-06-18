#include <iostream>
#include "contact.cpp"

using namespace std;

class BTree{
    public:
    Contact* contact;
    BTree* left;
    BTree* right;
    BTree(Contact* contact){
        this->contact=contact;
        left=NULL;
        right=NULL;
    }

};

class BTContact{

    public:
    BTree* root;
    BTContact(){
        root=NULL;
    }
    void addBTContact(Contact* contact){
        BTree* newNode= new BTree(contact);
        root=newNode;
    }
    void displayBTContact(BTree* root){
        if(root==NULL){
            return;
        }
        cout<<root->contact->name<<endl;
        displayBTContact(root->left);
        displayBTContact(root->right);
    }
};
