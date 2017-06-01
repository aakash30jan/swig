%module inherit

%inline %{

class Shape {
public:
  double x, y;
  void set_location(double _x, double _y) { x = _x; y = _y; }
  virtual double get_perimeter() { return 0; };
};

class Circle : public Shape {
public:
  int radius;
  Circle(int _radius): radius(_radius) {};
  virtual double get_perimeter() { return 6.28 * radius; };
};

class Square : public Shape {
public:
  int size;
  Square(int _size): size(_size) {};
  virtual double get_perimeter() { return 4 * size; }
};

%}
