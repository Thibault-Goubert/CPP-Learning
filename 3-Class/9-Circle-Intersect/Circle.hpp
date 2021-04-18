#ifndef _CIRCLE_HPP_   					     	   
#define _CIRCLE_HPP_   					     	   
#include "Point.hpp"   					     	   
   					     	   
//declaration de la classe Circle   					     	   
   					     	   
class Circle{   					     	   
    private:   					     	   
        Point m_center;   					     	   
        float m_radius;   					     	   
   					     	   
    public:   					     	   
        Circle(int x, int y, float r);   					     	   
        Point getCenter();   					     	   
        float getRadius();   					     	   
        void setCenter(const Point& c);   					     	   
        void setRadius(float r);   					     	   
        void add(Point p);   					     	   
        bool include(Point p);   					     	   
        bool intersect(Circle c);   					     	   
};   					     	   
   					     	   
#endif   					     	   
   					     	   