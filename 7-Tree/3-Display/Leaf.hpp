#ifndef _LEAF_HPP_   					     	   
#define _LEAF_HPP_   					     	   
#include "Node.hpp"   					     	   
#include <string>   					     	   
   					     	   
class Leaf: public Node{   					     	   
    private:   					     	   
        int value_;   					     	   
    public:   					     	   
        Leaf(int val):value_(val){}   					     	   
   					     	   
        int getResult() const;   					     	   
   					     	   
        std::string toString() const;   					     	   
        std::string display() const;   					     	   
};   					     	   
   					     	   
#endif