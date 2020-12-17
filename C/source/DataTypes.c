#include<stdio.h>
#include<limits.h>
int main(){
  //printf("sizeof(byte):%d\n",sizeof(byte));
  printf("sizeof(char):\t%d\n",sizeof(char));
  printf("sizeof(short):\t%d\n",sizeof(short));
  printf("sizeof(int):\t%d\n",sizeof(int));
  printf("sizeof(long):\t%d\n",sizeof(long));
  //printf("sizeof(long int):\t%d\n",sizeof(long int));
  //printf("sizeof(long long):\t%d\n",sizeof(long long));
  //printf("sizeof(long long int):%d\n",sizeof(long long int));
  printf("LONG_MAX:\t%d\n",LONG_MAX);
  printf("LLONG_MAX:\t%d\n",LLONG_MAX);
  printf("int\n");
  printf("sizeof(int):%d\n",sizeof(int));
  printf("INT_MIN:%d\n",INT_MIN);
  printf("INT_MAX:%d\n",INT_MAX);
  return 0;
}
