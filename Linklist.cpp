#include<iostream>
#include "contact.cpp"
using namespace std;

class Linklist{

public:
  Linklist* next;
  Contact* contact;

  Linklist(Contact* contact){
      next=nullptr;
    contact=contact;
  }
    

};

class ContactLinklist{

// private :

public:
Linklist* root;
   ContactLinklist(){

    root=NULL;
   }

      void addBTContact(Linklist* root,Contact* contact){
       if (root==NULL)
       {
           root=new Linklist(contact);
       }else{
          addBTContact(root->next,contact);
       }
       
      }


};

