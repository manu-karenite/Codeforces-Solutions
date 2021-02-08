#This code is written by Manavesh Narendra
#E-mail : manu.karenite@gmail.com
#LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/


n=int(input())
l=[]
for i in range(0,n):
	s=input()
	if len(s)>10:
		x=s[0]+str(len(s)-2)+s[-1]
		l.append(x)
	else:
		l.append(s)
for j in range(0,n):
	print(l[j])
