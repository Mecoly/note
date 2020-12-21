#include<stdio.h>
#include<string.h>
struct Student{
  char name[40];
  int age;
  int id;
};
struct IOP0{
  int DS18B20a:1;
  int DS18B20b:1;
  int FAN_SW:1;
  int LED:1;
  int :2;
  int IO1:1;
  int IO0:1;
};
struct Bit8{
  int byte1:8;
};
struct Bit32{
  int byte1:8;
  int :24;
};
struct Bit40{
  int byte1:8;
  int :32;
};
struct Bit16{
  int :16;
};
int main(){
  struct Student ts={"Zhang",20,10000001};
  struct IOP0 P0={0};
  printf("==============================\n");
  printf("结构体：\n");
  printf("sizeof(struct Student):\t%d\n",sizeof(struct Student));
  printf("ts.name:\t%s\n",ts.name);
  printf("ts.age:\t\t%d\n",ts.age);
  printf("ts.id:\t\t%d\n",ts.id);
  printf("==============================\n");
  printf("位域：\n"); 
  printf("sizeof(struct IOP0):\t%d\n",sizeof(struct IOP0));
  printf("P0.DS18B20a:\t%d\n",P0.DS18B20a);
  printf("P0.DS18B20b:\t%d\n",P0.DS18B20b);
  P0.FAN_SW = 1;
  printf("P0.FAN_SW:\t%d\n",P0.FAN_SW);
  //P0.LED = 2;  //警告：大整数隐式截断为无符号类型 [-Woverflow]
  printf("P0.LED:\t\t%d\n",P0.LED);
  printf("==============================\n");
  printf("位域长度：\n"); 
  printf("sizeof(struct Bit8):\t%d\n",sizeof(struct Bit8));
  printf("sizeof(struct Bit32):\t%d\n",sizeof(struct Bit32));
  printf("sizeof(struct Bit40):\t%d\n",sizeof(struct Bit40));
  printf("sizeof(struct Bit16):\t%d\n",sizeof(struct Bit16));
  return 0;
}
