import java.util.Scanner;
import java.lang.Math;

class GeoObject {
    double x;

    GeoObject(double a) {
        x = a;
    }

    double calculate() {
        return x;
    }
}

// ! End of Super Class

class OneDObject extends GeoObject {

    OneDObject(double a) {
        super(a);
    }

    double calculate() {
        return x;
    }
}

class Point extends OneDObject {

    Point(double a) {
        super(a);
    }

    double calculate() {
        return x;
    }
}

class StraightLine extends OneDObject {

    StraightLine(double a) {
        super(a);
    }

    double calculate() {
        return x;
    }
}

// ! End of One Dimensional Objects

class ThreeDObject extends GeoObject {
    double y, z;

    ThreeDObject(double a, double b, double c) {
        super(a);
        y = b;
        z = c;
    }

    double calculate() {
        return x * y * x;
    }
}

class Sphere extends ThreeDObject {

    Sphere(double a) {
        super(a, 0, 0);
        // Since Sphere has radius, which is same.
    }

    double calculate() {
        return (4 * Math.PI * Math.pow(x, 3)) / 3;
    }
}

class Cone extends ThreeDObject {

    Cone(double a, double b) {
        super(a, b, 0);
    }

    double calculate() {
        return (Math.PI * Math.pow(x, 2) * y) / 3;
    }
}

class Cylinder extends ThreeDObject {

    Cylinder(double a, double b) {
        super(a, b, 0);
    }

    double calculate() {
        return (Math.PI * Math.pow(x, 2) * y);
    }
}

// ! End of Three Dimensional Objects

class TwoDObject extends GeoObject {
    double y;

    TwoDObject(double a, double b) {
        super(a);
        y = b;
    }

    double calculate() {
        return x * y;
    }
}

class Curve extends TwoDObject {
    Curve(double a, double b) {
        super(a, b);
    }

    double calculate() {
        return -1;
        // Curve area cannot be calculated
    }
}

class Polygon extends TwoDObject {

    Polygon(double a, double b) {
        super(a, b);
    }

}

class Quadrilateral extends Polygon {

}

class Rectangle extends Quadrilateral {

}

class Parallelogram extends Quadrilateral {

}

class Triangle extends Polygon {

}

class RightAngled extends Triangle {

}

class Isosceles extends Triangle {

}

class Equilateral extends Triangle {

}

// ! End of Two Dimensional Objects

public class Inheritance {

    public static void main(String args[]) {

    }
}
