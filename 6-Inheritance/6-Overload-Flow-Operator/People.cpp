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
   					     	   
string People::display() const{   					     	   
    return firstname_ + " " + lastname_ + " : " + to_string(age_) + " ans";   					     	   
}   					     	   
   					     	   
std::ostream& operator<<(std::ostream& os, const People& p){   					     	   
    return os << p.display();   					     	   
}   					     	   