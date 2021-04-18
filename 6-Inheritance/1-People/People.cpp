#include "People.hpp"   					     	   
   					     	   
People::People(std::string f, std::string l, int age){   					     	   
    this->firstname = f;   					     	   
    this->lastname = l;   					     	   
    this->age = age;   					     	   
}   					     	   
std::string People::getFirstName()const{   					     	   
    return this->firstname;   					     	   
}   					     	   
std::string People::getLastName()const{   					     	   
    return this->lastname;   					     	   
}   					     	   
int People::getAge()const{   					     	   
    return this->age;   					     	   
}   					     	   