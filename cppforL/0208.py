ans=0
m,n=map(int,input().split())
for i in range(m,n+1):
    if(not i%17):
        ans+=i
print(ans)