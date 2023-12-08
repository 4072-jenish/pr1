#include<stdio.h>
#include<conio.h>

void main(){
      float unit,sum,ans,total;
      clrscr();

      printf("Enter units");
      scanf("%f",&unit);

      if(unit<=50){
	   sum=unit*0.5;
    }else if(unit<=100){
	       sum=(unit-50)*0.75+25;
    }else if(unit<=100){
	       sum=(unit-150)*1.20+100;
    }else if(unit<=250){
	       sum=(unit-250)*1.50+225;

    }

   ans=sum*0.2;
   total=ans+sum;
   printf("Total amount is %f\n",total);
   printf("Bill is %f",total);
	       getch();
 }
