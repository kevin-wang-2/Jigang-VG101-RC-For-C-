#ifndef SAMPLE_CODES_SHAPE_H
#define SAMPLE_CODES_SHAPE_H

class Shape {
protected:
    int width, height;
public:
    Shape(int _width, int _height) : width(_width), height(_height) {}
    virtual ~Shape() = default;
    virtual double area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(int _width, int _height) : Shape(_width, _height) {}
    ~Rectangle() final = default;
    double area() final {
        return width * height;
    }
};

class Triangle : public Shape {
public:
    Triangle(int _width, int _height) : Shape(_width, _height) {}
    ~Triangle() final = default;
    double area() final {
        return double(width * height) / 2;
    }
};

#endif //SAMPLE_CODES_SHAPE_H
