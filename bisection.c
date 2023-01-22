#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x)(x*x*x-x-4)

int main()
{
    int i=1;
    float a,b,c;
    float f,error;

    printf("give the value of a: ");
    scanf("\n%f",&a);
    printf("give the value of b: ");
    scanf("\n%f",&b);
    do
    {

        c=(a+b)/2;
        f=F(c);
        printf("\ni=%d \ta=%0.3f \tb=%0.3f \tc=%0.3f \tF(c)=%0.3f",i,a,b,c,f);



        if((F(a)*F(c))<0)
        {
            b=c;
            error=(fabs((c-a)/c))*100;
            printf("\t\terror=%f",error);
        }
        else if (F(a)*F(c)>0)
        {
            a=c;
            error=(fabs((c-b)/c))*100;
            printf("\t\terror=%f",error);
        }
        else
        {
            c=c;
            printf("root=%f",c);
        }

             i++;

    }
    while(error>0.05);

     printf("\n\nno.of iterations required=%d",i);
     printf("\nroot=%0.3f",c);
     printf("\nvalue of the function=%0.3f",F(c));

  return 0;

}
