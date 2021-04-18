#include "Student.hpp"   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
string Student::getPromotion()const{   					     	   
    return this->promotion_;   					     	   
}   					     	   
int Student::getGrade()const{   					     	   
    return this->grade_;   					     	   
}   					     	   
string Student::where() const{   					     	   
    return "At school, in "+ getPromotion() +" classroom";   					     	   
}   					     	   
   					     	   
string Student::display() const{   					     	   
    return firstname_ + " " + lastname_ + " : " + to_string(age_) + " ans, etudie en " + promotion_ + " (" + to_string(grade_) + " de moyenne)";   					     	   
}   					     	   
   					     	   
std::ostream& operator<<(std::ostream& os, const Student& s){   					     	   
    return os << s.display();   					     	   
}   					     	   