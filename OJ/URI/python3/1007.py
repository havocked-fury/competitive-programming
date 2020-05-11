#!/usr/bin/python3

ans = 0

for i in range(0,2):
	ans += ((-1)**(i)) * int ( input () ) * int ( input () )

print ( "DIFERENCA = %d" % (ans) )