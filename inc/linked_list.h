/**
 * File: linked_list.h
 * Author(s): Pierre Abraham Mulamba
 * Date of creation (modification): 20210314 (20210314)
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"
#include <memory>

class Linked_list{
 public:
  Linked_list();
  void add_node(int value);
  void insert_node(int value);
  void delete_node(int value);
  void print();
 private:
  std::shared_ptr<Node> head;
  std::shared_ptr<Node> tail;
};

#endif /* _LINKED_LIST_H_ */
