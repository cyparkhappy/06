#include <stdio.h>

int factorial(int x){
    int i;
    int result=1;

    for(i=x; i>=1; i--)
     result = result*i;

    return result;
}

int combination(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}


int main(void){
    int n,r;

    printf("n을 입력하시오: ");
    scanf("%d", &n);

    printf("r을 입력하시오: ");
    scanf("%d", &r);

    printf("%dC%d = %d\n", n,r, combination(n,r));

    return 0;
}