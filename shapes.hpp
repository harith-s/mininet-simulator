#include "shape.hpp"
#include <math.h>


template <typename T>
class Rectangle : public Shape<T> {
    
    protected:
    T length, breadth;

    public:
    Rectangle(T x, T y, T l, T b) : Shape<T>(x, y){
        length = l; breadth = b;
        this->shapeID = 0;
    }
    Rectangle(const Rectangle & other) : Shape<T>(other){
        length = other.length; breadth = other.breadth;
    }
    T getLength() const override final{
        return length;
    }
    T getBreadth(){
        return breadth;
    }
    bool isSquare(){
        return length == breadth;
    }
    T getArea() const override final{
        return length * breadth;
    }

    std::unique_ptr<sf::Shape> getShapeObj() override{
        std::unique_ptr<sf::RectangleShape> rectangle = std::make_unique<sf::RectangleShape>();

        rectangle->setSize(sf::Vector2f(length, breadth));
        rectangle->setOutlineColor(sf::Color::Red);
        rectangle->setOutlineThickness(5);
        rectangle->setPosition(this->mx, this->my);
        
        return rectangle;
    }
};

template <typename T>
class Square : public Rectangle<T>{
    public:
    Square(T x, T y, T s) : Rectangle<T>(x, y, s, s){
        this->shapeID = 1;
    }
};

template <typename T>
class Ellipse : public Shape<T> {

    T major, minor;
    public:
    Ellipse(T x, T y, T a, T b) : Shape<T>(x, y){
        major = a;
        minor = b;
        this->shapeID = 3;
    }
    T getLength() const override {
        return major;
    }
    T getXLength(){
        return major;
    }
    T getYlength(){
        return minor;
    }
    T getArea() const override{
        return 3.14 * major * minor;
    }
    std::unique_ptr<sf::Shape>  getShapeObj() override{

        std::unique_ptr<sf::CircleShape> ellipse = std::make_unique<sf::CircleShape>();
        ellipse->setFillColor(sf::Color(255, 0, 0));      // red color
        ellipse->setScale(float(major) / minor, 1);  
        ellipse->setRadius(minor);      
        ellipse->setPosition(this->getCoords().first, this->getCoords().second);
        return ellipse;
        
    }
};
template <typename T>
class Circle : public Ellipse<T>{
    public:
    Circle(T x, T y, T rad) : Ellipse<T>(x, y, rad, rad){
        this->shapeID = 2;
    }
    T getRadii() const{
        return this->getLength();
    }
    
};

