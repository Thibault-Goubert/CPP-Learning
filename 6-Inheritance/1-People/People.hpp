#ifndef _PEOPLE_HPP_   					     	   
#define _PEOPLE_HPP_   					     	   
#include <string>   					     	   
   					     	   
class People{   					     	   
    private:   					     	   
        std::string firstname;   					     	   
        std::string lastname;   					     	   
        int age;   					     	   
    public:   					     	   
        People(std::string f="", std::string l="", int age=0);   					     	   
        std::string getFirstName()const;   					     	   
        std::string getLastName()const;   					     	   
        int getAge()const;   					     	   
};   					     	   
   					     	   
#endif   					     	   
   					     	   
   					     	   