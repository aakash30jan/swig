%module classes

%inline %{

class Point {
public:
  int x, y;
  Point(int _x, int _y) : x(_x), y(_y) {}
  double distance(const Point& rhs) {
    return sqrt(pow(x-rhs.x, 2) + pow(y-rhs.y, 2));
  }
  void set(int _x, int _y) {
    x=_x;
    y=_y;
  }
};

%}
