#include <iostream>

using namespace std;

class Node {
  public: int data;
  Node * next;
};

class SinglyLinkedList {
  public: SinglyLinkedList() {
    head = NULL;
  }
  void insert(int value) {
    Node * newNode = new Node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;

  }
  void remove(int value) {
    Node * current = head;
    Node * previous = NULL;

    while (current != NULL) {
      if (current -> data = value) {
        if (previous == NULL) {
          head = current -> next;
        } else {
          previous -> next = current -> next;
        }
        delete current;
        return;
      }
      previous = current;
      current = current -> next;
    }
  }
  void print() {
    Node * current = head;
    if (head == NULL) {
      cout << "Empty List" << endl;
      return;
    }
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
    cout << endl;
  }
  private: Node * head;
};

int main() {
  SinglyLinkedList myList;

  myList.insert(5);
  myList.insert(10);
  myList.insert(15);
  myList.insert(20);
  myList.print();
  //myList.remove(15); Don't forget to fix it!
  //myList.print();
}
