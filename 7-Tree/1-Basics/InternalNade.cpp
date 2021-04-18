#include "InternalNode.hpp"   					     	   
   					     	   
int InternalNode::getResult(){   					     	   
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