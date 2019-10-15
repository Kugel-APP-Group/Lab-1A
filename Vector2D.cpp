#include<math.h>
class Vector2D{
public:
    double x,y;
    Vector2D(double x,double y){this->x=x,this->y=y;}//initiallizes the vector
    Vector2D(){this->x=this->y=0;}//initializes the zero vector
    Vector2D polar(double r,double t){return {r*cos(t),r*sin(t)};}//creates a vector by polar form (radians)
    Vector2D operator+(Vector2D ot){return {this->x+ot.x,this->y+ot.y};}//adding two vectors
    Vector2D operator-(Vector2D ot){return {this->x-ot.x,this->y-ot.y};}//subtracting two vectors
    double dot(Vector2D ot){return this->x*ot.x+this->y*ot.y;}//returns the dot-product
    double cross(Vector2D ot){return this->x*ot.y-this->y*ot.x;}//returns the 2D version of cross product
    double mag(){return sqrt(this->x*this->x+this->y*this->y);}//returns the magnitude of the vector
    double dir(){return atan2(this->y,this->x);}//returns the direction the vector is pointing (radians)
    Vector2D norm(){double t=dir();return {cos(t),sin(t)};}//returns the norm of the vector
    Vector2D operator*(double c){return {this->x*c,this->y*c};}//multiplies the vector by a constant
    Vector2D operator/(double c){return {this->x/c,this->y/c};}//divides the vector by a constant
    double proj(Vector2D ot){return this->dot(ot)/ot.mag();}//returns the length of the projection of a vector onto another
    Vector2D perp(){return {-y,x};}//returns the vector rotated 90 degrees CCW
};