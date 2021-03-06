# GoogleC++StyleGuide

[文档](https://google.github.io/styleguide/cppguide.html)

目录
|[C++版本](#C++版本)||
|:-:|:-:|
|[头文件](#头文件)|[独立完备的头文件](#独立完备的头文件) [#define保护](#define保护) [包含使用的](#包含使用的) [向前声明](#向前声明) [内联函数](#内联函数) [包含名字和顺序](#包含名字和顺序)|
|[作用域](#作用域)|[命名空间](#命名空间) [未命名的命名空间和静态变量](#未命名的命名空间和静态变量) [非成员静态成员全局函数](#非成员静态成员全局函数) [局部变量](#局部变量) [静态和全局变量](#静态和全局变量) [线程局部变量](#线程局部变量)|
|[类](#类)||
|[函数](#函数)|[输入输出](#输入输出) [写短函数](#写短函数) [函数重载](#函数重载) [默认参数](#默认参数) [后置返回类型语法](#后置返回类型语法)|
|[Google特别Magic](#Google特别Magic)|[所有权和智能指针](#所有权和智能指针) [cpplint](#cpplint)|
|[其他C++特征](#其他C++特征)||
|[中性语言](#中性语言)||
|[命名](#命名)|[一般命名规则](#一般命名规则) [文件名](#文件名) [类型名](#类型名) [变量名](#变量名) [常量名](#常量名) [函数名](#函数名) [命名空间名](#命名空间名) [枚举类名](#枚举类名) [宏定义名](#宏定义名) [其他的命名规则](#其他的命名规则)|
|[注释](#注释)|[注释风格](#注释风格) [文件注释](#文件注释) [类注释](#类注释) [函数注释](#函数注释) [变量注释](#变量注释) [必要的注释](#必要的注释) [标点拼写语法](#标点拼写语法) [未完成注释](#未完成注释)|
|[格式化](#格式化)||
|[例外的规则](#例外的规则)|[不符合此风格的代码](#不符合此风格的代码) [Windows代码](#Windows代码)|
|[另外](#另外)||

## C++版本
C++ 17
## 头文件
通常，每个.cc文件(源文件)都应该有一个关联的.h文件(头文件)。有一些常见的例外，例如单元测试和仅包含main()函数的.cc小文件。

正确使用头文件会对代码的可读性，大小和性能产生巨大影响。

### 独立完备的头文件
完整可独自编译（不推荐使用.inc文件）

包含所需的头文件
### define保护
头文件使用`#define <PROJECT>_<PATH>_<FILE>_H_`保护，防止多次包含
### 包含使用的
只包含似乎用的头文件
### 向前声明

### 内联函数
### 包含名字和顺序

## 作用域
### 命名空间
### 未命名的命名空间和静态变量
### 非成员静态成员全局函数
### 局部变量
### 静态和全局变量
### 线程局部变量
## 类

## 函数
### 输入输出
### 写短函数
### 函数重载
### 默认参数
### 后置返回类型语法

## Google特别Magic
### 所有权和智能指针
### cpplint
## 其他C++特征

## 中性语言

## 命名
### 一般命名规则
尽量避免不明含义的缩写
### 文件名
全小写，可以用`-`或`_`连接，默认`_`。
### 类型名
大写字母开头，不使用`_`连接
### 变量名
小写字母，使用`_`连接，类成员变量`_`结尾
### 常量名
`k`前缀后跟大写字母开头，`_`可作为连接符
### 函数名
大写字母开头
### 命名空间名
小写字母，使用`_`连接
### 枚举类名
同常量
### 宏定义名
全大写
### 其他的命名规则

## 注释
### 注释风格
`//`和`/* */`都可
### 文件注释
作者信息、声明、文件说明
### 类注释
说明如何使用
### 函数注释
声明前紧跟
### 变量注释
用途
### 必要的注释
复杂、重要、有趣的代码块加注释
### 标点拼写语法
正确使用
### 未完成注释
需要改善的代码处加注释
## 格式化
风格检查文件：[google-c-style.el](google-c-style.el)

每行长度限制80字符

非ASCII字符应该很少见，并且必须使用UTF-8格式。

不使用Tab缩进，使用2空格代替
## 例外的规则
### 不符合此风格的代码
### Windows代码
## 另外
