#include<stdio.h>
#include<stdlib.h>
void change_value(int a,int b);
void change_pvalue(int* a,int* b);
int main(){
  int a = 4;
  int b = 5;
  int* p =NULL;
  printf("========================================\n");
  //printf("*p=%d\n",*p);  //运行时：段错误
  printf("p=%p\n",p);
  p=&a;
  printf("p=&a;\n");
  printf("*p=%d\n",*p);
  printf("p=%p\n",p);
  printf("sizeof(p)=%d\n",sizeof(p));
  printf("sizeof(*p)=%d\n",sizeof(*p));
  printf("========================================\n");
  printf("main:\ta=%d\tb=%d\n",a,b);
  change_value(a,b);
  printf("main:\ta=%d\tb=%d\n",a,b);
  change_pvalue(&a,&b);
  printf("main:\ta=%d\tb=%d\n",a,b);
  printf("========================================\n");
  p=(int*)malloc(sizeof(int)*10);
  printf("p=(int*)malloc(sizeof(int)*10);\n");
  printf("sizeof(p)=%d\n",sizeof(p));
  printf("sizeof(*p)=%d\n",sizeof(*p));
  printf("p=%p\n",p);
  printf("*p=%d\n",*p);
  printf("p+1=%p\n",p+1);
  printf("*(p+1)=%d\n",*(p+1));
  printf("&p[1]=%p\n",&p[1]);
  printf("p[1]=%d\n",p[1]);
  free(p);
  printf("========================================\n");
  p=(int*)calloc(10,sizeof(int));
  printf("p=(int*)calloc(10,sizeof(int));\n");
  printf("sizeof(p)=%d\n",sizeof(p));
  printf("sizeof(*p)=%d\n",sizeof(*p));
  printf("p=%p\n",p);
  printf("*p=%d\n",*p);
  printf("p+1=%p\n",p+1);
  printf("*(p+1)=%d\n",*(p+1));
  printf("&p[1]=%p\n",&p[1]);
  printf("p[1]=%d\n",p[1]);
  free(p);
  printf("========================================\n");
  return 0;
}
void change_value(int a,int b){
  int temp = a;
  a = b;
  b = temp;
  printf("change_value:\ta=%d\tb=%d\n",a,b);
}
void change_pvalue(int* a,int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("change_pvalue:\ta=%d\tb=%d\n",*a,*b);
}
