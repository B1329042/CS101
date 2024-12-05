#include <stdio.h>
int main() {
    int i = 12345;
    int a =i%10,b =(i%10000-i%1000)/1000;
    i=i-b*1000-a+a*1000+b;
    printf("%d",i);
    return 0;
}
