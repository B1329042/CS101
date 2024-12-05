#include <stdio.h>

int main() {
    double PI=0.0f;
    double c=4.0f;
    int b=1;
    int x=1;
    for (int b=1;PI<=3.141585;b=b+4){
        x=x+2;
        PI=PI+(c/b);
        printf("%.5f\n",PI);
        printf("%d\n",b);
        if(PI>=3.141585&PI<=3.141594){
            break;
        }
        x=x+2;
        PI=PI-(c/(b+2));
        printf("%.5f\n",PI);
        printf("%d\n",b);
        if(PI>=3.141585&PI<=3.141594){
            break;
        }
    }
    printf("%.5f\n",PI);
    printf("%d",x-4);
    return 0;
}

