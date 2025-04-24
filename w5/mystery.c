#include<stdio.h>

int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}

int main(void)
{
    int result = mystery(7,91);

    printf("returned value is: %d", result);
    return 0;
}