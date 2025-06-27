# Mininet-simulator

This document summarizes the progress over the first four weeks of the MiniNetSim project, covering foundational programming, object-oriented design, graphical visualization, and the introduction of discrete event simulation.

## Week 1 – Fundamentals of C++ and Project Structure

- Reviewed class structures, access control, and modular C++ design.
- Practiced separating code into headers and implementation files.
- Built and tested a simple project using Makefiles to manage compilation.
- Learned the basics of dependency tracking and incremental builds.

## Week 2 – Shape Hierarchy and Polymorphism

- Implemented a set of geometric shapes: Rectangle, Square, Circle, and Ellipse.
- All shapes inherit from an abstract base class `Shape`, supporting polymorphism.
- Added utility methods for area calculation, identification, and (x, y) positioning.
- Ensured all methods could be accessed uniformly via base-class pointers.
- Emphasized modular design principles to support future extensibility.

## Week 3 – UML and Visual Rendering with SFML

- Designed class structure using UML diagrams for better planning and visualization.
- Introduced a `Canvas` class to manage and render shapes.
- Used SFML to create a window and display graphical representations of shapes.
- Shapes handled their own drawing logic, maintaining a clean separation of concerns.

## Week 4 – Discrete Event Simulation and Networks Introduction

- Studied the principles of discrete event simulation (DES), which models systems as a series of time-stamped events.
- Gained foundational understanding of computer networks including topology, routing, and packet behavior.
- The simulator serves as a template to understand event-based systems and to practice reading and modifying codebases.

## Resources and Further Reading

- [Prof. Vinay's Computer Networks Lectures](https://youtu.be/Lo_pIjzej1A?si=qcIB673zmFUzxZMj)
- [DES Concepts (Chapter 3)](https://cs.baylor.edu/~maurer/aida/desauto/chapter3.pdf)
- [Cornell Lecture Notes on DES](https://people.orie.cornell.edu/mru8/orie3120/lec/lec10.pdf)


This project combines strong design practices with graphical and simulation-based learning, providing a foundation for building a scalable and insightful network simulator.
