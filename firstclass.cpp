#include <iostream>
using std::cout, std::endl;

  class Rectangle {
    private:
          int width, height;

    public:
       Rectangle(int w, int h){
          width = w;
          height = h;
}

int getWidth() {
   return width;
}
int getHeight(){
     return height;
}
int area() {
    return width * height;
}

};

   int main()
  {
       Rectangle rect(3, 4);
       cout << "Width: " << rect.getWidth() << endl;
       cout << "Height: " << rect.getHeight() << endl;
       cout << "Area: " << rect.area() << endl;
       return 0;
}
