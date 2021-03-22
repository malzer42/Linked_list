/**
 * File: node.h
 * Author(s): Pierre Abraham Mulamba
 * Date of creation (modification): 20210314 (20210314)
 * Description: Node definition
 */

#ifndef NODE_H
#define NODE_H

#include <memory>

struct Node{
  int data;
  std::shared_ptr<Node> next;
};

#endif /* NODE_H_ */
