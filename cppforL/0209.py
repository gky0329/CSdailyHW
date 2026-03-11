from sys import stdin
a=stdin.readline().strip()
a=int(a)
ans=0
while(a):
    a-=1
    temp=0
    temp-=int(stdin.read(1))
    temp-=int(stdin.read(1))
    temp-=int(stdin.read(1))
    temp+=int(stdin.read(1))
    if(temp>0):
        ans+=1
    try:
        stdin.read(1)
    except:
        break
print(ans)