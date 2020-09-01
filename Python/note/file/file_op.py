import os #文件操作
# 判断路径
if not os.path.exists("./test"):
	os.mkdir("./test")
	pass
# 写入
file_w=open("文本.mcl","w",1)
file_w.write("第一次写入\n")
file_w.close()
file_r=open("文本.mcl","r",1)
print(file_r.read())
file_r.close()
file_w=open("文本.mcl","w",1)
file_w.write("第二次写入\n")
file_w.close()
file_w=open("文本.mcl","a",1)
file_w.write("第三次写入\n")
file_w.close()