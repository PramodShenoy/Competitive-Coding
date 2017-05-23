#!/bin/python3

import sys

t2=""
time = input().strip().split(":")
m=time[2]
if (m[2])=='P' and int(time[0])<12:
    t2+=str((int(time[0])+12))
elif (m[2])=='P' and int(time[0])==12:
    t2=time[0]
elif (m[2])=='A' and int(time[0])==12:
    t2='00'
else:
    t2=time[0]
print(t2+":"+time[1]+":"+m[0:2])
