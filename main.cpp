#include <iostream>
#include <cstring>

#include "Node.h"
#include "Student.h"

using namespace std;

void add(Node*& head, Node* newNode);
void print(Node* head);
void remove(Node*& head, int id);
void average(Node* head, float& sum, int& count);
void quit(Node*& head);

int main(){
  Node* head = nullptr;
  char command[20];

  while(true){
    cout << "Enter command (ADD, PRINT, DLETE, AVERAGE, QUIT): ";
    cin >> command;

    //ADD
    if (strcmp(command, "ADD") == 0){
      char first[100];
      char last[100];
      int id;
      float gpa;

      cout << "Frist Name: ";
      cin >> first;

      cout << "Last Name: ";
      cin >> last;

      cout << "ID: ";
      cin >> id;

      cout << "GPA: ";
      cin >> gpa;

      

    }


    //PRINT
    else if (strcmp(command, "PRINT") == 0){
      if (head == null) {
	cout << "List is empty.";

      }
      else {
	

      }

    }

    //DELETE
    else if (strcmp(command, "DELETE") == 0){

    }

    //AVERAGE
    else if (strcmp(command, "AVERAGE") == 0){
      

    }

    //QUIT
    else if (strcmp(command, "QUIT") == 0) {
       
    }

    else {
        cout << "Invalid command.";
    }
  }

  void add(Node*& head){

  }

  void print(Node* head){
    Student* s = head->get_value();
     cout << "First Name: " << s->getFirst() << endl;
     cout << "Last Name: " << s->getLast() << endl;
     cout << "ID: " << s->getID() << endl;
     cout << "GPA: " << s->getGPA() << endl;

    if (s->set_Value != NULL){
      print(s->set_Value);
    }

  }


}
