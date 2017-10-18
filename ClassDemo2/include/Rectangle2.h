#ifndef RECTANGLE2_H
#define RECTANGLE2_H


class Rectangle
{
    private:
        double width;
        double length;

    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;

    protected:
};

#endif // RECTANGLE2_H
