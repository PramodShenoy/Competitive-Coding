t = int(input())
while(t>0):
	s = input().split()
	a=[]
	for i  in s:
		if "machula" not in i:
			a.append((i))
	#print(a)
	if(a[0]=="+"):
		y=a[1]
		res=a[3]
		x=int(res)-int(y)
		final = str(x)+" + "+str(y)+" = "+str(res)
		print(final)
	elif(a[2]=="="):
		x=a[0]
		res=a[3]
		y=int(res)-int(x)
		final = str(x)+" + "+str(y)+" = "+str(res)
		print(final)
	elif(a[3]=="="):
		x=a[0]
		y=a[2]
		res = int(x)+int(y)
		final = str(x)+" + "+str(y)+" = "+str(res)
		print(final)
	t=t-1