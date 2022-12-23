#ifndef RECTANGLE
#define RECTANGLE

struct Rectangle {
    int x1, x2, y1, y2;
    int square;
    int perimeter;
};

void Square(struct Rectangle *temp);
void Perimeter(struct Rectangle *temp);

#endif
