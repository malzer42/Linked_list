/**
 * File: main.cpp
 * Author(s): Pierre Abraham Mulamba
 * Date of creation (modification): 20210314 (20210314)
 */

#include "linked_list.h"
#include <iostream>

int main(int argc, char *argv[])
{
  try{
    std::cout << "Program to implement a Linked List of prime numbers\n";
    Linked_list list;
    std::cout << "\nEnter the limit of prime numbers: ";
    int limit = 0;
    std::cin >> limit;

    std::cout << "\nCREATING A LINKED LIST OF PRIME NUMERS\n";
    for(int i = 2; i < limit; i++){
      int n_divisors = 0;
      for(int j = 2; j <= i; j++){
        if(i % j == 0) n_divisors += 1;
      }
      if(n_divisors < 2)list.add_node(i);
    }

    list.print();

    std::cout << "\nINSERTING A NEW NODE TO THE LINKED LIST\n";
    std::cout << "Enter the value of the node to insert: ? ";
    int value_to_insert = 0;
    std::cin >> value_to_insert;
    list.insert_node(value_to_insert);
    list.print();

    std::cout << "\nADDING A NEW NODE TO THE LINKED LIST\n";
    std::cout << "\nEnter the value of the node to add: ? ";
    int value_to_add = 0;
    std::cin >> value_to_add;
    list.add_node(value_to_add);
    list.print();

    std::cout << "\nTESTING THE DELETION OF A NODE OF THE LINKED LIST\n";
    std::cout << "\nEnter the value of the node to delete: ? ";
    int value_to_delete = 0;
    std::cin >> value_to_delete;
    list.delete_node(value_to_delete);
    list.print();
    std::cout << "\nProgram Ended Successfully\n";


    return 0;
  }
  catch(...){
    std::cerr << "Unknown Exception Thrown\n";

  }
}
