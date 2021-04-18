#include "Worker.hpp"   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
string Worker::getCompany()const{   					     	   
    return this->company_;   					     	   
}   					     	   
int Worker::getSalary()const{   					     	   
    return this->salary_;   					     	   
}   					     	   
string Worker::where() const{   					     	   
    return "At "+ getCompany();   					     	   
}   					     	   