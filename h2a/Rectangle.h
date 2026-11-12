#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width = 0.0;
    double height = 0.0;

public:
    double getArea() const;
    double getCircum() const;
    void setWidth(double width);
    void setHeight(double height);
};

#endif
