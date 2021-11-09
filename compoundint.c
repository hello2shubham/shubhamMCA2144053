#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float CI,s;
    printf("enter the principal = ");
    scanf("%f",&p);
    printf("\nenter the rate = ");
    scanf("%f",&r);
    printf("\nenter the time = ");
    scanf("%f",&t);
    s=p*(pow((1+r/100),t));
    CI=s-p;
    printf("\nrequired compound interest =%.2f",CI);
}