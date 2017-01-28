#include<stdio.h>
#include<stdlib.h>
int main()
{
       long int c,n,k,i,x,y[1000]={0},op;
       printf("\n No. of Case: ");
       scanf("%d",&c);
       if(c<1)
       {
              return 0;
       }
       for(i=0;i<c;i++)
       {
              printf("\n No. of (frnd  Choc): ");
			  scanf("%3d",&n);
              scanf("%3d",&k);
              printf("\n Prices:\n");
              for(x=0;x<k;x++)
              {
                     scanf("%d",&y[x]);
              }
              op=(k/y[0]);
              for(x=1;x<k;x++)
              {
                     if(op<(k/y[x]))
                     	op=(k/y[x]);
              }
              if(n!=1&&op==1)
			  printf("\n OUTPUT = -%d\n",op);
			  else
			  printf("\n OUTPUT = %d\n",op);
       }
       return 0;
}
