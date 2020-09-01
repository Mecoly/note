import time
import os
def time_print():
	print(time.strftime("%Y-%m-%d"))
	print(time.strftime("%H:%M:%S"))
	print(time.process_time())
	print(time.perf_counter())
	pass
if __name__=='__main__':
	i=0
	while True :
		os.system("cls")
		print(i)
		i+=1
		time_print();
		time.sleep(1)
		pass
	pass