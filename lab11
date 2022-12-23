#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    int x1;
    int x2;
    int y1;
    int y2;
} rec;

void perimeter(struct Rectangle){
    float per = 2 * abs(rec.x1 - rec.x2) + 2 * abs(rec.y1 - rec.y2);
    printf("%f", per);

};

void square (struct Rectangle) {
    float sq = abs((rec.x1 - rec.x2) * (rec.y1 - rec.y2));
    printf("%f\n", sq);
};

int main(){
    printf("Введите координаты \n ");
    scanf("%d", &rec.x1);
    scanf("%d", &rec.x2);
    scanf("%d", &rec.y1);
    scanf("%d", &rec.y2);
    
    perimeter(rec);
    square(rec);
 
    return 0;
}
