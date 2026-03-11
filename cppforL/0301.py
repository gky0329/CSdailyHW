a=input().strip()
a=int(a)
ans=0
def f(i):
    ans=1
    for j in range(1,i+1):
        ans*=j
    return ans
for i in range(1,a+1):
    ans+=f(i)
print(ans)