a=False
b=int(input())
for i in {3,5,7}:
    if(b%i==0):
        if(a):
            print(' ',end="")
        else:
            a=True
        print(i,end="")
if(not a):
    print('n',end="") 