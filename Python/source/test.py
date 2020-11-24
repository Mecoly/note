#coding=utf-8
from __future__ import print_function
#数据类型
def primitive_type():
    print("=====基础数据类型=====")
    #整数
    int_binary,int_octal,int_decimal,int_hexadecimal = 0b1101,0o1101,1101,0x1101
    print("整数：")
    print("int_binary=%d:"%int_binary,type(int_binary))
    print("int_octal=%d:"%int_octal,type(int_octal))
    print("int_decimal=%d:"%int_decimal,type(int_decimal))
    print("int_hexadecimal=%d:"%int_hexadecimal,type(int_hexadecimal))
    #浮点数
    float_f,float_e = 3.14,356e3
    print("浮点数：")
    print("float_f=%f:"%float_f,type(float_f))
    print("float_e=%f:"%float_e,type(float_e))
    #复数
    complex_j,complex_c = 2+3j,complex(2,3)
    print("复数：")
    print("complex_j=%s:"%complex_j,type(complex_j))
    print("complex_c=%s:"%complex_c,type(complex_c))
    print("complex_c.real=",complex_c.real,type(complex_c.real))
    print("complex_c.imag=",complex_c.imag,type(complex_c.imag))
    #字符串
    str_str = "Hello World!!!"
    print("字符串：")
    print("str_str=%s:"%str_str,type(str_str))
    #布尔值
    bool_true,bool_false = True,False
    print("布尔值：")
    print("bool_true=%d:"%bool_true,type(bool_true))
    print("bool_false=%d:"%bool_false,type(bool_false))
    print("")
    #空值
    print("空值：")
    print("None:",type(None))
    pass
def str_function():
    print("字符串：")
    str_0 = "Python";
    str_1 = "No.%d!!!"%1
    print("str_0:",str_0)
    print("str_1:",str_1)
    print("len(str_0):",len(str_0))
    print("max(str_0):",max(str_0))
    print("min(str_0):",min(str_0))
    print("str_0[2]:",str_0[2])
    print("str_0[2:4]:",str_0[2:4])
    print("str_0:")
    for c in str_0:
        print(c)
    str_name1 = "Zhao"
    str_name2 = "Qian"
    str_name3 = "Li"
    names = ",".join([str_name1,str_name2,str_name3])
    print("names:",names)
    print("names.split(','):",names.split(','))
    pass
if __name__ == '__main__':
    primitive_type()
    str_function()
    pass
