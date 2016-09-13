
#include<stdio.h>

int main()

{

int h1,min1,tmin1,h2,min2,tmin2,leftmin;
scanf("%d%d",&hour1,&min1);
tmin1=h1*60;
tmin1=tmin1+min1;
scanf("%d%d",&h2,&min2);
tmin2=hour2*60;
tmin2=tmin2+min2;
leftmin=tmin2-tmin1;
printf("%d",leftmin);
return 0;

}
