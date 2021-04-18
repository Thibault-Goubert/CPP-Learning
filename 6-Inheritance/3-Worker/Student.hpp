#ifndef _STUDENT_HPP_   					     	   
#define _STUDENT_HPP_   					     	   
#include <string>   					     	   
#include "People.hpp"   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
class Student: public People{   					     	   
    private:   					     	   
        string promotion_;   					     	   
        int grade_;   					     	   
    public:   					     	   
        Student(const string& f="",const string& l="",int age=0,const string& p="",int g=0):People(f,l,age),promotion_(p),grade_(g){   					     	   
        }   					     	   
        string getPromotion()const;   					     	   
        int getGrade()const;   					     	   
};   					     	   
   					     	   
#endif   					     	   