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