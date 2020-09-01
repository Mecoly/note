'''1.注释'''
#单行注释 npp快捷键：CTRL+Q
"""
多行注释
"""
'''
多行注释
'''
'''2.变量'''
# temp="hello world"
# print(type(temp))
'''3.数据类型'''
'''3.1数字'''
# i,f,b,c=777,3.1415926,True,3+2j
# print("i=%d:"%i,type(i))
# print("f=%f:"%f,type(f))
# print("b=%s(%d):"%(b,b),type(b))
# print("c=%s:"%c,type(c))
# #算术运算
# print("加：5+2=",5+2)
# print("减：5-2=",5-2)
# print("乘：5*2=",5*2)
# print("除：5/2=",5/2)
# print("除：5//2=",5//2)
# print("乘方：5**2=",5**2)
# print("取余：5%2=",5%2)
# #赋值运算
# # [1] =可多个赋值，交换值更方便
# num1,num2,num3=2,5,10
# print(num1,num2,num3)
# num1,num2=num2,num1
# print(num1,num2,num3)
# # [2] "op=" op:算术运算符
# num1%=2
# num2**=2
# print(num1,num2)
# #比较运算 > >= < <= == != 可连续比较
# print(1<num2<10)
'''3.2字符串'''
# #格式化
# print("字符串格式化:")
# str_0="2019/9/3"
# str_1="今天是：%s,开学后的第%d周"
# print(str_1%(str_0,2))
# #运算
# print("运算:")
# str_3="python"
# str_4="is good"
# print("str_3+str_4=",str_3+str_4)
# print("str_3*3=",str_3*3)
# print("good" in str_4)
# print(str_3[:-4])
# #函数
# print("函数")
# str_5=" a b c d "
# print("原来数据|%s|"%str_5)
# print("find:a",str_5.find("a"))
# print("最后四个字符find:a",str_5.find("a",-4))
# print("转换大写:%s"%str_5.upper())
# print("判断小写 替换前:%s,替换后:%s"%(str_5.islower(),str_5.replace("b","B").islower()))
# print("去除所有空格|%s|"%str_5.replace(" ",""))
# print("去除两端空格|%s|"%str_5.strip())
'''3.3序列'''
# #创建
# list_1=["Top","Jun","Mid","ADC","Sup"]
# print("长度:%d"%len(list_1),list_1)
# #增
# list_1.append("Coa")
# list_1.insert(1,"coa")
# print(list_1)
# #删
# del list_1[1]
# list_1.pop(5)
# print(list_1)
# #改
# list_1[1]="Mid"
# print(list_1)
# #查
# print(list_1.count("Mid"))
'''3.4字典'''
# # 创建
# dict_1={"Top":"Gimgoon","Jun":"Tian","Mid":"Doinb","ADC":"Lwx","Sup":"Crisp"}
# print(dict_1)
# # 查询(key)
# print("Jun" in dict_1)
# # 修改(key索引修改value值)
# dict_1["Jun"],dict_1["Mid"]=dict_1["Mid"],dict_1["Jun"]
# print(dict_1)
# # 删除(key)
# del dict_1["Sup"]
# print(dict_1)
# # 清空
# dict_1.clear()
# print(dict_1)
# # 数组转化
# list_d=[("Top","Gimgoon"),("Jun","Tian"),("Mid","Doinb"),("ADC","Lwx"),("Sup","Crisp")]
# dict_1=dict(list_d)
# print(dict_1)
'''4.条件控制'''
# #判断
# sign=5
# if 0<=sign<6:
	# print("不及格")
	# pass
# elif 6<=sign<=10:
	# print("及格")
	# pass
# else:
	# print("未知数据")
	# pass
# #循环
# print("while循环")
# sign=0
# while sign<5:
	# print(sign)
	# sign+=1
	# pass
# print("for循环in range()")
# for i in range(5,0,-1):
	# print(i)
	# pass
# print("for循环in list")
# list_loop=['东','西','南','北','中']
# for i in list_loop:
	# print(i)
	# pass
'''5.函数'''
#1.参数 变量名即可 形参传入，不改变实参值 有默认值可不传入，使用默认值，否则必须传入
#2.返回值可有多个，也可无返回值
#3.pass 占位符，空语句 若函数内无语句必须有
def function(a,b,c="默认值"):
	a,b=b,a
	print(a,"+",b,"=",a+b)
	return a,b,c
	pass
#3.主函数
if __name__=='__main__':
	a,b=4,6
	print("函数运行前：a=%d,b=%d"%(a,b))
	a_r,b_r,c_r=function(a,b)
	print("函数运行后：a=%d,b=%d"%(a,b))
	print("传出参数：a_r=%d,b_r=%d,c_r=%s"%(a_r,b_r,c_r))
	pass
#乘法表
'''
for x in range(1,10):
	s=""
	for y in range(1,x+1):
		temp="\t%dx%d=%d"%(y,x,x*y)
		s=s+temp
		pass
	print(s)
	pass
'''
