#pragma once 

#include <iostream> 

namespace ariel{

    class Point{ 
        private:
            double _x; 
            double _y; 

        public:
            Point(double x, double y): _x(x), _y(y){}
            double distance(const Point&); 
            std::string print(); 
            Point moveTowards(const Point& ,const Point& ,const double); 

            double get_x(); 
            double get_y(); 
        //    void set_x(const double); 
        //    void set_y(const double); 


    };

}