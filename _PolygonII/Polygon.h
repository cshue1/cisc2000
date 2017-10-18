// CHRISTINE SHUE
// OCTOBER 28, 2016
// POLYGON ARRAY


#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
    private:
        static const int MAX_POLYGONS;
        static int numPolygons;
        int length;
        int width;
        static int totalA;
        static int totalP;
    public:
        Polygon();
        void getLandW(int l,int w);
        static int getMax();
        static int getNumPolygons();
        int getArea();
        int getPerimeter();
        double getAvgArea();       //NEW
        double getAvgPerim();      //NEW
        void printPolygon()const;
        void drawPolygon()const;
        ~Polygon();
};


#endif // POLYGON_H
