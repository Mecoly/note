# Java笔记

![javalogo](image/java-logo-b.png)

## 目录

- [准备工作](#准备工作)
- [编程风格](#编程风格)
- [HelloWorld](#HelloWorld)
- [基础](#基础)
  * [注释](#注释)
  * [标识符](#标识符)
  * [关键字](#关键字)
  * [基础数据类型](#基础数据类型)
  * [字符串](#字符串)
  * [结构体](#结构体)
  * [运算符](#运算符)
  * [流程控制](#流程控制)


## 准备工作

Windows：解压jdk 添加环境变量

## 编程风格
Google Java编程规范 [文档](https://google.github.io/styleguide/javaguide.html)

## HelloWorld
```java
public class HelloWorld{
    public static void main(String[] args){
        System.out.println("Hello World!");
    }
}
```
## 基础
### 注释
单行注释：`//`

多行注释：以`/*`开始，以` */`结束

文档注释：以`/**`开始，以`*/`结束

javadoc标记：

    类或文档
        @author：作者
        @version：版本
        @deprecated：过期方法
        @see：参见
    方法或构造器
        @param：方法参数说明
        @return：方法返回值
        @throws：抛出异常类型
        @exception：同@throws
        @deprecated：过期方法
        @see：参见
    成员变量
        @deprecated：过期方法
        @see：参见

### 标识符

### 关键字

### 基础数据类型
|类型|关键字|字节|直接量|
|:-:|:-:|:-:|:-:|
|整型|byte|1|
|整型|short|2|
|整型|int|4|默认|
|整型|long|8|L(l)后缀|
|字符|char|2|
|浮点|float|4|F(f)后缀|
|浮点|double|8|默认|
|布尔|boolean|true或false|

科学计数法：5.2e2 520

下划线分割数值：100 10_0
### 字符串
#### 定义
`String s;`
#### 操作

|函数|功能|
|:-:|:-:|
|equals|比较内容|
|format|格式化|
|isEmpty|判断是否为空|
|length|返回长度|
|replace|替换|
|replaceAll|替换|
|substring|提取|
|split|分割|
|toString|转换成字符串|
### 结构体
### 运算符
#### 算术运算符
`+ - * / % ++ --`
#### 位运算符
`& | ~ ^ << >> >>>`
#### 赋值运算符
`=`

算术运算符、位运算符结合=
#### 比较运算符
`> >= < <= == !=`
#### 逻辑运算符
`&& & || | ! ^`

&&：短路与

^：异或
#### 三目运算符
`a:b?c`

```java
if(a){
    return b;
}
else{
    return c;
}
```
### 流程控制
#### 分支结构
if

```java
if(expression1){
    //op;
}
else if(expression2){
    //op;
}
...
else{
    //op;
}
```
switch

```java
switch(key){
    case value1:
        //操作
        break;
    case value2:
        //操作
        break;
    ...
    default:
        //操作
}
```
#### 循环结构
while

```java
while(true){
    //操作
}
```
do while

```java
do{
    //op;
}while(true);
```
for

```java
for(int i=0;i<10;i++){
    //操作
}
```
foreach

循环控制：break continue return
