
t = (int)(input())

for count in range(t):
	s = input()
	s = s.strip()
	s = s.lower()
	s = s.split(' ')
	n = len(s)
	new = []
	for i,word in enumerate(s):
		if i!=n-1:
			new.append(s[i][0].upper())
			new.append('.')
			new.append(' ')
	new.append(s[n-1][0].upper())
	new.append(s[n-1][1:])
	print(''.join(new))


