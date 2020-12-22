#include<stdio.h>
#include<stdlib.h>
void change_value(int a,int b);
void change_pvalue(int* a,int* b);
int main(){
  int a = 4;
  int b = 5;
  int* p =NULL;
  int* ptemp = NULL;
  printf("========================================\n");
  printf("p=%p\n",p);
  //printf("*p=%d\n",*p);  //运行时：段错误
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
  p=(int*)calloc(10,sizeof(int));
  if(p){
    printf("p=(int*)calloc(10,sizeof(int));\n");
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);
    printf("p+1=%p\n",p+1);
    printf("*(p+1)=%d\n",*(p+1));
    printf("&p[1]=%p\n",&p[1]);
    printf("p[1]=%d\n",p[1]);
    free(p);
  }
  else{
    printf("Error:calloc false\n");
    printf("p=%p\n",p);
  }
  printf("========================================\n");
  p=(int*)malloc(10*sizeof(int));
  if(p){
    printf("p=(int*)malloc(10*sizeof(int));\n");
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);
    printf("p+1=%p\n",p+1);
    printf("*(p+1)=%d\n",*(p+1));
    printf("&p[1]=%p\n",&p[1]);
    printf("p[1]=%d\n",p[1]);
    free(p);
  }
  else{
    printf("Error:malloc false\n");
    printf("p=%p\n",p);
  }
  printf("========================================\n");
  p=(int*)malloc(10*sizeof(int));
  if(p){
    printf("p=(int*)malloc(10*sizeof(int));\n");
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);
    ptemp=(int*)malloc(10*sizeof(int));
    if(ptemp){
      printf("ptemp=(int*)realloc(10*sizeof(int));\n");
      printf("p=%p\n",p);
      printf("ptemp=%p\n",ptemp);
      printf("*ptemp=%d\n",*ptemp);
      free(ptemp);
    }
    else{
      printf("Error:malloc false\n");
      printf("p=%p\n",p);
      printf("*p=%d\n",*p);
      printf("ptemp=%p\n",ptemp);
      free(p);
    }
  }
  else{
    printf("Error:malloc false\n");
    printf("p=%p\n",p);
  }
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
