#ifndef _APPRENTICE_HPP_   					     	   
#define _APPRENTICE_HPP_   					     	   
#include <string>   					     	   
#include "Student.hpp"   					     	   
#include "Worker.hpp"   					     	   
#include "People.hpp"   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
class Apprentice: public Worker, public Student{   					     	   
    public:   					     	   
        Apprentice(const string& f="",const string& l="",int a=0,const string& p="",int g=0,const string& c="",int s=0):People(f,l,a),Worker(f,l,a,c,s),Student(f,l,a,p,g){}   					     	   
        string where() const;   					     	   
};   					     	   
   					     	   
#endif   					     	   