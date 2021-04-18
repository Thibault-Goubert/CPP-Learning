#include "Circle.hpp"   					     	   
#include "Point.hpp"   					     	   
//definition des methodes de Circle   					     	   
   					     	   
Circle::Circle(int x, int y, float r){   					     	   
    this->m_center = Point(x,y);   					     	   
    this->m_radius = r;   					     	   
}   					     	   
Point Circle::getCenter(){   					     	   
    return this->m_center;   					     	   
}   					     	   
int Circle::getRadius(){   					     	   
    return this->m_radius;   					     	   
}   					     	   
void Circle::setCenter(const Point& c){   					     	   
    this->m_center=c;   					     	   
}   					     	   
void Circle::setRadius(int r){   					     	   
    this->m_radius=r;   					     	   
}   					     	   