#!/usr/bin/python3

weight = [2,3,5]
ans = 0

for i in range(0,3):
	var = float(input())
	ans += var*weight[i];

print("MEDIA = %0.1f" % (ans/10) )