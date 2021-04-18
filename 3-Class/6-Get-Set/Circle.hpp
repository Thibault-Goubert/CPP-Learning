#ifndef _CIRCLE_HPP_   					     	   
#define _CIRCLE_HPP_   					     	   
#include "Point.hpp"   					     	   
   					     	   
//declaration de la classe Circle   					     	   
   					     	   
class Circle{   					     	   
    private:   					     	   
        Point m_center;   					     	   
        float m_radius;   					     	   
   					     	   
    public:   					     	   
        Circle(int x, int y, int r);   					     	   
        Point getCenter();   					     	   
        int getRadius();   					     	   
        void setCenter(const Point& c);   					     	   
        void setRadius(int r);   					     	   
};   					     	   
   					     	   
#endif   					     	   
   					     	   