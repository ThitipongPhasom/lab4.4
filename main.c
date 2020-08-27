 #include <stdio.h>
int main(void)
{
  int x;
  float L1,L2,Height,Suml,Area;
  printf("L1 : ");
  scanf("%f",&L1);
  printf("L2 : ");
  scanf("%f",&L2);
  x = (L1/L2)*100;
  if(x>=40){x=(L2/L1)*100;}
  if(x>= 40)
  {printf("Height : ");
  scanf("%f",&Height);
  Suml=L1+L2;
  Area=0.5*Height*Suml;
  printf("Area = %0.2f ",Area );}
  else{printf("%d \n",x);}
  return 0;
}