n,m=map(int,input().split())
arr=[True]*n
for i in range(m):
    for j in range(n):
        if(not (j+1)%(i+1)):
            arr[j]=not arr[j]
for j in range(n):
    if(not arr[j]):
        if(j):print(',',end="")
        print(j+1,end="")