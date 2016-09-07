#include <stdio.h>
void main() {
    int x=20;
    int y=31;
    printf("x+y=%d\n", x+y);
    printf("x-y=%d\n", x-y);
    printf("x*y=%d\n", x*y);
    printf("x%%y=%d\n", x%y);
    printf("x/y=%f\n",x/y);
    double a=7.9,
           b=32.56;
    printf("a/b=%lf\n", a/b);
    printf("x+a=%lf\n", x+a);
    unsigned char c1=10,
                  c2=200;
    printf("c1+c2=%d\n",c1+c2);
    int i=15;
    printf("i=%d\n",i);
    i=i-1;
    printf("i=i-1:%d\n",i);
    i--;
    printf("i--:%d\n",i);
    i-=1;
    printf("i-=1:%d\n",i);
}