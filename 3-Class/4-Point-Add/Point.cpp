#include "Point.hpp"   					     	   
//Definition des methodes de la classe Point   					     	   
   					     	   
Point::Point(int x, int y){   					     	   
    this->setX(x);   					     	   
    this->setY(y);   					     	   
}   					     	   
   					     	   
void Point::setX(int x){   					     	   
    this->m_x = x;   					     	   
}   					     	   
void Point::setY(int y){   					     	   
    this->m_y = y;   					     	   
}   					     	   
   					     	   
int Point::getX(){   					     	   
    return m_x;   					     	   
}   					     	   
int Point::getY(){   					     	   
    return m_y;   					     	   
}   					     	   
   					     	   
void Point::add(Point p){   					     	   
    this->setX(this->getX()+p.getX());   					     	   
    this->setY(this->getY()+p.getY());   					     	   
}   					     	   