#ifndef _LEAF_HPP_   					     	   
#define _LEAF_HPP_   					     	   
#include "Node.hpp"   					     	   
   					     	   
class Leaf: public Node{   					     	   
    private:   					     	   
        int value_;   					     	   
    public:   					     	   
        Leaf(int val):value_(val){}   					     	   
        int getResult();   					     	   
};   					     	   
   					     	   
#endif   					     	   