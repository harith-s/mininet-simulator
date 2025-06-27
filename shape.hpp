#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <utility>

template <typename T>
class Shape{
    protected:
    T mx, my;
    int shapeID = -1;

    public:
    Shape(int x, int y) : mx(x), my(y){}

    Shape(const Shape & other) : mx(other.mx), my(other.my){}
    
    std::pair<T, T> getCoords() const{
        return {mx, my};
    }
    virtual T getLength() const = 0;
    virtual T getArea() const = 0;

    void setPos(T x, T y){
        mx = x; my = y;
    }

    int getShape(){
        return shapeID;
    }

    virtual std::unique_ptr<sf::Shape> getShapeObj() = 0;
};

