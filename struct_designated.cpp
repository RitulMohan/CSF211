#include<stdio.h>

struct Point
{
  int x;
  int y;
};

int main()
{
    struct Point p = {.y = 10, .x = 20};
    printf("%d %d", p.x, p.y);
    return 0;
}

//if i dont initialise say, x here i'll get value of as 0 in the output 