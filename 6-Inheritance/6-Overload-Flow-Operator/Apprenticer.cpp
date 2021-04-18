#include "Apprentice.hpp"   					     	   
   					     	   
string Apprentice::where() const{   					     	   
    return "Depends on the day";   					     	   
}   					     	   
   					     	   
string Apprentice::display() const{   					     	   
    return firstname_ + " " + lastname_ + " : " + to_string(age_) + " ans, etudie en " + promotion_ + " (" + to_string(grade_) + " de moyenne), travaille chez " + company_ + " (" + to_string(salary_) + "e/m)";   					     	   
}   					     	   
   					     	   
std::ostream& operator<<(std::ostream& os, const Apprentice& a){   					     	   
    return os << a.display();   					     	   
}   					     	   