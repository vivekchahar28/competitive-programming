#include<stdio.h>
#include<math.h>
#include<limits.h>
void bisect(float *x,float a,float b,int *itr)
{
    *x=(a+b)/2;
    ++(*itr);
    printf("Iteration No %3d X=%7.5f\n",*itr,*x);
}
static int arr[20];
int n;
float f(float x)
{
  float sum=0.0,var=1.0;
    int i,j;
        for(i=n;i>=0;i--)
        {
        var*=arr[i];
        for(j=i;j>0;j--)
            var*=x;
            sum+=var;
            var=1.0;
        }
    return sum;
}
int main()
{
    int itr=0,maxitr,i;
    float a,b,x,aerr,x1;
    printf("Enter the value of allowed error and max iteration\n");
    scanf("%f%d",&aerr,&maxitr);

    printf("Enter the value of n");
    scanf("%d",&n);

        for(i=n;i>=0;i--)
        {
            printf("Enter the %d constant",i);
            scanf("%f",&arr[i]);
        }

        a=-32657;
        b=32657;

        int flag=0;
        while(a<b)
        {
            if(f(a)<0&&f(b)>0)
                break;
                if(flag) {a++;flag=0;}
                else {b--; flag=1;}
        }
        printf("Chosen a=%f b=%f",a,b);
    bisect(&x,a,b,&itr);
    do{
    if(f(a)*f(x)<0)
    b=x;
    else
        a=x;
    bisect(&x1,a,b,&itr);
   if(fabs(x1-x)<aerr)
   {
       printf("After %d iterations ,root=%6.4f\n",itr,x1);
       return 0;
   }
   x=x1;
  }while(itr<maxitr);
printf("Solution does not converge iteration not sufficient");
return 1;
}
