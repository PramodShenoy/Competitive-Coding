def op1(s):
	new = list(s)
	for n,i in enumerate(new):
		if i=='c':
			new[n]='a'
		else:
			new[n]='c'

	new = ''.join(new)
	return new

def op2(s):
	return s[::-1]

def op3(s):
	s=s+'a' + op1(op2(s))
	return s
s=''
for j in range(10000):
	s=op3(s)
	
t=(int(input()))

for i in range(t):
	k=(int(input()))
	print(s[k-1])
