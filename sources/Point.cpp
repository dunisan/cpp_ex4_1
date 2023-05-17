#include "Point.hpp"

namespace ariel{

    double Point::distance(const Point& other){return 0.0;}
    std::string Point::print(){return "none";}
    Point Point::moveTowards(const Point& source, const Point& distination, const double range){return Point(0.0,0.0);}

    double Point::get_x(){
        return _x; 
    }

    double Point::get_y(){
        return _y; 
    } 

    


}