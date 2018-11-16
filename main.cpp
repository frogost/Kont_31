#include <iostream>
#include <math.h>

class point{
private:
    int x;
    char y;
public:
    int getX() {
        return x;
    }

    char getY() {
        return y;
    }

    int setX(int* x1){
        x=*x1;
    }

    char setY(char* y1){
        y=*y1;
    }
};

int main() {
    point a;
    a.getX();
    a.getY();
    return 0;
}