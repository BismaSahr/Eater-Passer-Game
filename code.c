#include <stdio.h>
#include <stdlib.h>
int a,b,i,j;
int arr[100][100];
int board(int a,int b)
{

    int i,j;
    if(a>b || b>a)
    {
        printf("**********Please Enter same number of rows and column**********\n (Thank you)\n");
    }
    else if(a<3 || b<3){
                printf("**********Please Enter number greater than or equal to 3  **********\n (Thank you)\n");

    }
    else{
          for(i=0;i<a;i++)
          {
            //  printf("\t     |");
              for(j=0;j<b;j++)
              {
                  printf("\t     %d",arr[i][j]);
              }
              printf("\n");
          }
    }



}
int passer(int a,int b)
{
    int l,k,m,n;

   printf("\nEnter number of row: ");
   scanf("%d",&l);
   printf("\nEnter number of column: ");
   scanf("%d",&k);

  //   printf("%d",arr[l][k]);
 arr[l][k]='P';
 arr[m][n]='E';

        for(i=0;i<a;i++)
          {
            //  printf("\t     |");
              for(j=0;j<b;j++)
              {
                  if(arr[i][j]==arr[l][k])
                  {
                    printf("\t     %c",arr[i][j]);
                  }
                  else if(arr[i][j]==arr[m][n])
                  {
                      printf("\t     %c",arr[i][j]);
                  }
                  else{
                    printf("\t     %d",arr[i][j]);
                  }
              }
              printf("\n");
          }
}

int eater(int a,int b)
{
    int m,n,l,k;

   printf("\nEnter number of row: ");
   scanf("%d",&m);
   printf("\nEnter number of column: ");
   scanf("%d",&n);

  //   printf("%d",arr[l][k]);
arr[l][k]='P';
arr[m][n]='E';
        for(i=0;i<a;i++)
          {
            //  printf("\t     |");
              for(j=0;j<b;j++)
              {
                  if(arr[i][j]==arr[l][k])
                  {
                    printf("\t     %c",arr[i][j]);
                  }
                  else if(arr[i][j]==arr[m][n])
                  {
                      printf("\t     %c",arr[i][j]);
                  }
                  else{
                    printf("\t     %d",arr[i][j]);
                  }
              }
              printf("\n");
          }
}


int main()
{

    printf("*****************To start game Enter Board size*******************\n");
 //  board();
     int a,b,l,k,d=0;
    printf("Enter row :");
    scanf("%d",&a);
    printf("Enter column :");
    scanf("%d",&b);

   board(a,b);
   if(( a>b || b>a) || ( a<3 || b<3))
   {
      printf("\n");
   }
else{
     while(d<=a)
   {

       printf("\n*************************Passer Turn******************************");
       passer(a,b);

      printf("\n*************************Eater Turn******************************");
      eater(a,b);
   d++;

    }

    }
    return 0;
}