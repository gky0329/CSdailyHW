a,b,c,d=input().split()
if(int(d)==0):
    d=" "
else:
    d=c
a=int(a)
b=int(b)
print(c*b)
for i in range(a-2):
    print(c+d*(b-2)+c)
print(c*b)