#include<stdio.h>
#include<conio.h>
/*BODY MASS INDEX*/
int main()
{
float H,W;
printf("enter your weight W(kg):%f");
scanf("%f",&W);
printf("enter your height H(cm):%f");
scanf("%f",&H);
float BMI=W*10000/(H*H);
 if(BMI<=18.5 && BMI>0)
{
    printf("BMI=%f\n",BMI);
    printf("Under weight\n");
    printf("Eat healthy\n");
}
else if (BMI>18.5 && BMI<=25)
{
    printf("BMI=%f\n",BMI);
    printf("Normal weight\n");
    printf("Good. Maintain your Health");
}
else if(BMI>25)
{
    printf("BMI=%f\n",BMI);
    printf("Over weight\n");
    printf("Stop eating junk food\n");
}
else
{
    printf("Incorrect data.\n");
}
return 0;
}
