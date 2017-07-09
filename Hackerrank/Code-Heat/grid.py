
x = int(input().strip())
y = int(input().strip())
lt = [[0]*x for _ in range(y)]
for i in range(x):
    lt[i] = list(input().strip())
skip=[]
j=0
i=0
# x = 4 y =4
while j<y:
    while i<x-1:
        if lt[i+1][j]<lt[i][j]:
            skip.append(j)
            break
        i=i+1
    j=j+1
    
print(len(skip))
        