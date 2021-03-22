#include "linked_list.h"
#include <iostream>

Linked_list::Linked_list()
{
  head = nullptr;
  tail = nullptr;
}

void Linked_list::add_node(int value)
{
  // Create a new node
  std::shared_ptr<Node> tmp = std::make_shared<Node>();
  tmp->data = value;

  if(head == nullptr){
    head = tmp;
    tail = tmp;
  }
  else{
    tail->next = tmp;
    tail = tail->next;
  }
}

void Linked_list::print()
{
  std::shared_ptr<Node> begin = std::make_shared<Node>();
  begin = head;
  while(begin != nullptr){
    std::cout << begin->data << "->";
    begin = begin->next;
  }
  std::cout << "/\n";
}

void Linked_list::insert_node(int value)
{
  // create a new Node
  std::shared_ptr<Node> tmp = std::make_shared<Node>();
  tmp->data = value;

  std::shared_ptr<Node> begin = std::make_shared<Node>();
  begin = head;
  // 1. Insert the new node at the beginning of the list if the list is empty
  if(begin == nullptr){
    begin = tmp;
    tail = tmp;
  }

  // 2. Insert the new node at the beginning of the linked list if data < begin->data_
  if(tmp->data < head->data){
    tmp->next = head;
    head = tmp;
  }

  // 3. Insert a new node between two consecutive nodes
  while(begin != nullptr){
    if(begin->data < tmp->data && tmp->data < begin->next->data){
      tmp->next = begin->next;
      begin->next = tmp;
    }
    begin = begin->next;
  }
}

void Linked_list::delete_node(int value)
{
  std::cout << "Deletion of the node with value: " << value << '\n';
  std::shared_ptr<Node> begin = std::make_shared<Node>();
  begin = head;
  if(begin == nullptr){
    std::cout << "\nThe Linked list is Empty\n";
  }

  if(head->data == value){// Deletion of the head node
    head = head->next;
  }
  else{ // Deletion of a node in the middle
    while(begin != nullptr && begin->next != tail){
      if(begin->next->data == value){
        begin->next = begin->next->next;
        break;
      }
      begin = begin->next;
    }
  }

  // Deletion of the tail node
  while(begin!= nullptr){
    if(begin->next == tail && tail->data == value){
      begin->next = nullptr;
    }
    begin = begin->next;
  }

}
