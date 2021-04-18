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
   					     	   
Rational& Rational::operator=(int val){   					     	   
    *this = Rational(val);   					     	   
    return *this;   					     	   
}   					     	   
   					     	   
std::ostream& operator<<(std::ostream& os, const Rational& r){   					     	   
    os << r.m_num;   					     	   
    if(r.m_den != 1) {   					     	   
        os << "/" << r.m_den;   					     	   
    }   					     	   
   					     	   
    return os;   					     	   
};   					     	   
   					     	   
Rational& Rational::operator+=(const Rational& r){   					     	   
   					     	   
    this->m_num *= r.m_den;   					     	   
    this->m_num += r.m_num*this->m_den;   					     	   
    this->m_den *= r.m_den;   					     	   
   					     	   
    this->simplify();   					     	   
    return *this;   					     	   
}   					     	   
   					     	   
   					     	   