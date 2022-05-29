#include<stdio.h>


void Display(int iRow,int iCol)
{
  int i=0;
  int j=0;
  if(iRow!=iCol)
  {
     printf("Invalid Input");
      return;
  }
  

     for(i=1;i<=iRow;i++)
     {
         for(j=1;j<=iCol;j++)
         {
            if( i==1 || i==iRow || j==1 || j==iCol || i==j )
            {
                printf("*\t");
            }
            
            else if(i>j)
            {
                printf("&\t");
            }
            else if(j>i)
            {
                printf("$\t");
            }
             
         }
         printf("\n");
     }
}

int main()
{
   int iValue1=0;
   int iValue2=0;


   printf("Enter rows\n");
   scanf("%d",&iValue1);

   printf("Enter columns\n");
   scanf("%d",&iValue2);

   Display(iValue1,iValue2);


    return 0;

}


