#include "Rational.hpp"   					     	   
#include <stdlib.h>   					     	   
//Definition des methodes de la classe Rational   					     	   
   					     	   
Rational::Rational(int num, int den){   					     	   
    this->m_num=num;   					     	   
    this->m_den=den;   					     	   
    simplify();   					     	   
}   					     	   
void Rational::simplify(){   					     	   
    int a = this->m_num;   					     	   
    int b = this->m_den;   					     	   
    int c;   					     	   
    while ( a != 0 ) {   					     	   
        c = a;   					     	   
        a = b%a;   					     	   
        b = c;   					     	   
    }   					     	   
    this->m_num = this->m_num/b;   					     	   
    this->m_den = this->m_den/b;   					     	   
   					     	   
    if(this->m_den<0){   					     	   
        this->m_den = -this->m_den;   					     	   
        this->m_num = -this->m_num;   					     	   
    }   					     	   
}   					     	   
   					     	   
int Rational::getDen()const{   					     	   
    return this->m_den;   					     	   
}   					     	   
int Rational::getNum()const{   					     	   
    return this->m_num;   					     	   
}   					     	   