#ifndef _WORKER_HPP_   					     	   
#define _WORKER_HPP_   					     	   
#include <string>   					     	   
#include "People.hpp"   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
class Worker: virtual public People{   					     	   
    private:   					     	   
        string company_;   					     	   
        int salary_;   					     	   
    public:   					     	   
        Worker(const string& f="",const string& l="",int age=0,const string& c="",int s=0):People(f,l,age),company_(c),salary_(s){}   					     	   
        string getCompany()const;   					     	   
        int getSalary()const;   					     	   
        virtual string where() const;   					     	   
};   					     	   
   					     	   
   					     	   
#endif   					     	   