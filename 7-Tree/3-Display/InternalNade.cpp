#include "InternalNode.hpp"   					     	   
#include <string>   					     	   
   					     	   
int InternalNode::getResult() const{   					     	   
    int a = shared_ptr_left_->getResult();   					     	   
    int b = shared_ptr_right_->getResult();   					     	   
    if(operation_=='+'){   					     	   
        return a+b;   					     	   
    }else if(operation_=='-'){   					     	   
        return a-b;   					     	   
    }else{   					     	   
        return a*b;   					     	   
    }   					     	   
}   					     	   
   					     	   
std::string InternalNode::toString() const{   					     	   
    return "("+shared_ptr_left_->toString() + operation_ + shared_ptr_right_->toString()+")";   					     	   
}   					     	   
   					     	   
std::string InternalNode::display() const{   					     	   
    return shared_ptr_left_->toString() + operation_ + shared_ptr_right_->toString();   					     	   
}