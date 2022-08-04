#include<stdio.h>

int main()
{
  int arr[5], res=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=1;i;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(i%arr[j]==0)
        res++;
    }
    if(res>3)
    {
      printf("%d\n",i);
      break;
    }
    else
      res=0;
  }
}
