#include "Circle.hpp"   					     	   
#include "Point.hpp"   					     	   
#include <iostream>   					     	   
   					     	   
//definition des methodes de Circle   					     	   
   					     	   
Circle::Circle(int x, int y, float r){   					     	   
    this->m_center = Point(x,y);   					     	   
    this->m_radius = r;   					     	   
}   					     	   
Point Circle::getCenter(){   					     	   
    return this->m_center;   					     	   
}   					     	   
float Circle::getRadius(){   					     	   
    return this->m_radius;   					     	   
}   					     	   
void Circle::setCenter(const Point& c){   					     	   
    this->m_center=c;   					     	   
}   					     	   
void Circle::setRadius(float r){   					     	   
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
bool Circle::intersect(Circle c){   					     	   
   					     	   
    float radiuss = this->getRadius() + c.getRadius();   					     	   
    float dist = this->getCenter().distance(c.getCenter());   					     	   
   					     	   
    if(dist>radiuss){   					     	   
        return false;   					     	   
    }   					     	   
    return true;   					     	   
}   					     	   