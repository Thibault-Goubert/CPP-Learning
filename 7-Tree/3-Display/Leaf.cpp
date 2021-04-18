#include "Leaf.hpp"   					     	   
#include <string>   					     	   
   					     	   
int Leaf::getResult() const{   					     	   
    return value_;   					     	   
}   					     	   
   					     	   
std::string Leaf::toString() const{   					     	   
    return std::to_string(getResult());   					     	   
}   					     	   
   					     	   
std::string Leaf::display() const{   					     	   
    return toString();   					     	   
}