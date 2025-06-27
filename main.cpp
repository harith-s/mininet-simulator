#include "shapes.hpp"
#include <iostream>
#include <vector>
// #include <SFML/Graphics.hpp>

template <typename T>
class Canvas{

    std::vector<std::unique_ptr<Shape<T>>> shapes;

    public:
    void addShape(std::unique_ptr<Shape<T>> && shape){
        shapes.push_back(std::move(shape));
    }

    void displayALL(sf::RenderWindow & window){
        while (window.isOpen()) {
            sf::Event event;
            while (
                window.pollEvent(event))
                if (event.type ==
                sf::Event::Closed)
                    window.close();

            window.clear();
            for (const auto& shape : shapes){
                auto s = std::move(shape->getShapeObj());
                window.draw(*s.get());
            }
            window.display();
        }
    }
    ~Canvas(){
        shapes.clear(); 
    }
};
int main(){
    Canvas<int> cvs;
    cvs.addShape(std::make_unique<Rectangle<int>>(50, 50, 100, 60));
    cvs.addShape(std::make_unique<Square<int>>(500, 50, 80));         
    cvs.addShape(std::make_unique<Ellipse<int>>(100, 300, 80, 40));     
    cvs.addShape(std::make_unique<Circle<int>>(480, 300, 40));          

    std::make_shared<Circle<int>>(100, 100, 20);

   sf::RenderWindow window(
        sf::VideoMode(640, 480),
        "Hello World");
    cvs.displayALL(window);
}