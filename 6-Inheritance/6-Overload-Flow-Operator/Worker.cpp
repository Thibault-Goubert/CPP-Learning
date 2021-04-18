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
   					     	   
string Worker::display() const{   					     	   
    return firstname_ + " " + lastname_ + " : " + to_string(age_) + " ans, travaille chez " + company_ + " (" + to_string(salary_) + "e/m)";   					     	   
}   					     	   
   					     	   
std::ostream& operator<<(std::ostream& os, const Worker& w){   					     	   
    return os << w.display();   					     	   
}   					     	   