#include<stdio.h>
#include<string.h>
int main(){
  char str[10] = {"Hello"};
  char str1[] = {" World !!!"};
  char buff[20] = {""};
  char delim[] = {" "};
  char* pchar = NULL;
  int result = 0;
  printf("string.h test\n");
  printf("====================\n");
  printf("char str[10] = {\"Hello\"};\n");
  printf("str:%s\n",str);
  printf("sizeof(str):%d\n",sizeof(str));
  printf("strlen(str):%d\n",strlen(str));
  printf("====================\n");
  printf("char str1[] = {\" World !!!\"};\n");
  printf("str1:%s\n",str1);
  printf("sizeof(str1):%d\n",sizeof(str1));
  printf("strlen(str1):%d\n",strlen(str1));
  printf("====================\n");
  strcpy(buff,str);
  printf("strcpy(buff,str);\n");
  printf("buff:%s\n",buff);
  printf("sizeof(buff):%d\n",sizeof(buff));
  printf("strlen(buff):%d\n",strlen(buff));
  printf("====================\n");
  result = strcmp(buff,str);
  printf("result = strcmp(buff,str);\n");
  printf("result:%d\n",result);
  result = strcmp(buff,str1);
  printf("result = strcmp(buff,str1);\n");
  printf("result:%d\n",result);
  printf("====================\n");
  strcat(buff,str1);
  printf("strcat(buff,str1);\n");
  printf("buff:%s\n",buff);
  printf("sizeof(buff):%d\n",sizeof(buff));
  printf("strlen(buff):%d\n",strlen(buff));
  printf("====================\n");
  result = strcmp(buff,str);
  printf("result = strcmp(buff,str);\n");
  printf("result:%d\n",result);
  result = strncmp(buff,str,strlen(str));
  printf("result = strncmp(buff,str,strlen(str));\n");
  printf("result:%d\n",result);
  printf("====================\n");
  pchar = strtok(buff,delim);
  printf("delim:%s\n",delim);
  printf("pchar = strtok(buff,delim);\n");
  printf("pchar:%s\n",pchar);
  printf("sizeof(pchar):%d\n",sizeof(pchar));
  printf("strlen(pchar):%d\n",strlen(pchar));
  while(pchar = strtok(NULL,delim)){
    printf("pchar = strtok(NULL,delim);\n");
    printf("pchar:%s\n",pchar);
    printf("sizeof(pchar):%d\n",sizeof(pchar));
    printf("strlen(pchar):%d\n",strlen(pchar));
  }
  printf("====================\n");
  printf("buff:%s\n",buff);
  printf("buff:%p\n",buff);
  printf("sizeof(buff):%d\n",sizeof(buff));
  printf("strlen(buff):%d\n",strlen(buff));
  printf("====================\n");
  pchar = strrchr(buff,'H');
  printf("pchar = strrchr(buff,'H');\n");
  printf("pchar:%s\n",pchar);
  printf("pchar:%p\n",pchar);
  printf("sizeof(pchar):%d\n",sizeof(pchar));
  printf("strlen(pchar):%d\n",strlen(pchar));
  printf("====================\n");
  pchar = strrchr(buff,'l');
  printf("pchar = strrchr(buff,'l');\n");
  printf("pchar:%s\n",pchar);
  printf("pchar:%p\n",pchar);
  printf("sizeof(pchar):%d\n",sizeof(pchar));
  printf("strlen(pchar):%d\n",strlen(pchar));
  printf("====================\n");
  pchar = strstr(buff,"ll");
  printf("pchar = strstr(buff,\"11\");\n");
  printf("pchar:%s\n",pchar);
  printf("pchar:%p\n",pchar);
  printf("sizeof(pchar):%d\n",sizeof(pchar));
  printf("strlen(pchar):%d\n",strlen(pchar));
  printf("====================\n");
  for(int i=0;i<135;i++){
    printf("error%d:%s\n",i,strerror(i));
  }
  //memset(buff,0,sizeof(buff));
  //printf("memset(buff,0,sizeof(buff));\n");
  //printf("buff:%s\n",buff);
  //printf("sizeof(buff):%d\n",sizeof(buff));
  //printf("strlen(buff):%d\n",strlen(buff));
  //printf("====================\n");
  return 0;
}
