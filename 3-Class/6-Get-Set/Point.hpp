#ifndef _POINT_HPP_   					     	   
#define _POINT_HPP_   					     	   
   					     	   
//Declaration de la classe Point   					     	   
   					     	   
class Point{   					     	   
    private :   					     	   
        int m_x, m_y;   					     	   
   					     	   
    public :   					     	   
        Point(int x=1, int y=1);   					     	   
        int getX();   					     	   
        int getY();   					     	   
        void setX(int);   					     	   
        void setY(int);   					     	   
        void add(Point p);   					     	   
        void scale(int r);   					     	   
};   					     	   
   					     	   
#endif   					     	   
   					     	   