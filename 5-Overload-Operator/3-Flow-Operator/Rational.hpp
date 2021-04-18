#ifndef _RATIONAL_HPP_   					     	   
#define _RATIONAL_HPP_   					     	   
#include <iostream>   					     	   
   					     	   
//Declaration de la classe Rational   					     	   
   					     	   
class Rational{   					     	   
  private:   					     	   
    int m_den, m_num;   					     	   
    void simplify();   					     	   
   					     	   
  public:   					     	   
    int getDen()const;   					     	   
    int getNum()const;   					     	   
    Rational(int num, int dem=1);   					     	   
    Rational& operator=(int val);   					     	   
    friend std::ostream& operator<<(std::ostream& os, const Rational& r);   					     	   
};   					     	   
   					     	   
#endif   					     	   
   					     	   