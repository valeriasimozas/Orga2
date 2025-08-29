#include <stdio.h>

int main(){
    int a = 5; int b=3; int c = 2; int d =1;
    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
    printf("%d\n", a+b*c/d);
    printf("%d\n", a%b);
    printf("%d\n%d\n",a!=b, a ==b);
    printf("%x\n%x\n", a&b, a|b);
    printf("%x\n", ~a);
    printf("%d\n%d\n",a&&b, a||b);
    printf("%x\n%x\n", a<<1,a>>1 );
    a+=b;
    printf("%d\n", a);
    a-=b;
    printf("%d\n", a);
    a*=b;
    printf("%d\n", a);
    a/=b;
    printf("%d\n", a);
    a%=b;
    printf("%d\n", a);
    return 0;
}
