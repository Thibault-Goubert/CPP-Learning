#ifndef _PEOPLE_HPP_   					     	   
#define _PEOPLE_HPP_   					     	   
#include <string>   					     	   
   					     	   
using namespace std;   					     	   
   					     	   
class People{   					     	   
    private:   					     	   
        string firstname_;   					     	   
        string lastname_;   					     	   
        int age_;   					     	   
    public:   					     	   
        People(const string& f="",const string& l="",int age=0):firstname_(f),lastname_(l),age_(age){}   					     	   
        string getFirstName() const;   					     	   
        string getLastName() const;   					     	   
        int getAge() const;   					     	   
        virtual string where() const;   					     	   
};   					     	   
   					     	   
#endif   					     	   