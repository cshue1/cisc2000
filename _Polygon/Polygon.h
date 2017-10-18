#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
    private:
        static const int MAX_POLYGONS;
        static int numPolygons;
        int length;
        int width;
        int area;
        int perimeter;
    public:
        Polygon();
        Polygon(int l,int w);
        int getMax();
        int getArea();
        int getPerimeter();
        void printPolygon()const;
        ~Polygon();
};

#endif // POLYGON_H
