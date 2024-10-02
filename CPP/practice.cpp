#include<stdio.h>

int main()
{
  int i, arr[8]={0};
  arr[1] = 4;
  arr[4] = 9;
  arr[7] = 2;
​  int x = arr[1];
  arr[x] = 44; 
  arr[arr[7]] = 11;

  // Some Lines

  for(i=0; i<8; i++)
   printf("%d ", arr[i]);
  return 0;
}