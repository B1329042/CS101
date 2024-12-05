#include <stdio.h>
int main() {
    double PI=0.0f;
    double c=4.0f;
    int b=1;
    int x=1;
    for (int b=1;PI<=3.141585;b=b+4){
        PI=PI+(c/b);
        if(PI>=3.141585&PI<=3.141594){
            printf("%.5f\n",PI);
            printf("%d\n",x);
            break;
        }
        x=x+2;
        PI=PI-(c/(b+2));
        if(PI>=3.141585&PI<=3.141594){
            printf("%.5f\n",PI);
            printf("%d\n",x);
            break;
        }
        x=x+2;
    }
    return 0;
}
