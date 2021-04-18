#include "People.hpp"   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
string People::getFirstName()const{   					     	   
    return this->firstname_;   					     	   
}   					     	   
string People::getLastName()const{   					     	   
    return this->lastname_;   					     	   
}   					     	   
int People::getAge()const{   					     	   
    return this->age_;   					     	   
}   					     	   
   					     	   
string People::where() const{   					     	   
    return "At home";   					     	   
}   					     	   