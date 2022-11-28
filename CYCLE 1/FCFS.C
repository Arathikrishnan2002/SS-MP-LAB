# include<stdio.h>
# include<stdlib.h>
void main()
{int r,rq[50],initial,totalhm=0,i;
 
printf("enter the no of resources");
scanf("%d",&r);
printf("enter the request sequence");
for(i=0;i<r;i++)
scanf("%d",&rq[i]);
printf("enter the initial position");
scanf("%d",&initial);

for(i=0;i<r;i++)
{
 totalhm=totalhm+abs(rq[i]-initial);
 initial =rq[i];
}
printf("total head moment = %d",totalhm);
}
