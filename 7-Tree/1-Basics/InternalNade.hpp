#ifndef _INTERNALNODE_HPP_   					     	   
#define _INTERNALNODE_HPP_   					     	   
#include "Node.hpp"   					     	   
   					     	   
class InternalNode: public Node{   					     	   
    private:   					     	   
        std::shared_ptr<Node> shared_ptr_left_;   					     	   
        std::shared_ptr<Node> shared_ptr_right_;   					     	   
        char operation_;   					     	   
   					     	   
    public:   					     	   
        InternalNode(std::shared_ptr<Node> l, std::shared_ptr<Node> r, char o):shared_ptr_left_(l),shared_ptr_right_(r),operation_(o){}   					     	   
        int getResult();   					     	   
};   					     	   
   					     	   
#endif   					     	   
   					     	   
   					     	   