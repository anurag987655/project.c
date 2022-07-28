#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int boundary(int x,int y)
{
    if (x<y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    int a=x-y;
    return(a);
}


int no_of_selection(int x)
{
    if (x<=10)
   {
    return(2);
   }
   else if (x>10 && x<=50)
   {
    return(4);
   }
   else if (x>50 && x<=200)
   {
    return(6);
   }
   else if (x>200)
   {
    return(10);
   }
   else
    {
    printf("invlalid selection ");
    }
}



int main()
//to generate the random number in c we use rand or srand
{
 int lower , upper ;

printf("\tprovide me the lower and upper range datas\n");


 printf("lower :\n");
 scanf("%d",&lower);

 printf("upper  :\n");
 scanf("%d",&upper );

 printf("the lower and upper data that you selected are %d AND %d:",lower,upper);

 printf("\t\t\n\n\n----------------------------------------------------------------\n\n\n");

int range= boundary(upper,lower);
int data = no_of_selection(range );



srand(time(0));//initail value of the number
 //time is used to generate varying numbers of code with increment or change in time

int rand_number =(rand()%(upper-lower+1))+lower;



printf("provide me %d numbers to play ",data);


int any_number ;

for (int i=1;i<=data ;i++)
{
    scanf("%d",&any_number);
   if (any_number == rand_number )
   {
      printf("\n\n\t CONGRATULATION!!CORRECT GUESS ");
      break;
   }
   else
   {
       printf("\n INCORRECT GUESS ");
   }
}
printf("the random number was %d",rand_number );

}
