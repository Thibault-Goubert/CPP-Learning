#include "Circle.hpp"   					     	   
#include "Point.hpp"   					     	   
//definition des methodes de Circle   					     	   
   					     	   
Circle::Circle(int x, int y, int r){   					     	   
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
void Circle::add(Point p){   					     	   
    this->m_center.add(p);   					     	   
}   					     	   
bool Circle::include(Point p){   					     	   
    if(this->getCenter().distance(p)>this->getRadius()){   					     	   
        return false;   					     	   
    }   					     	   
    return true;   					     	   
}   					     	   