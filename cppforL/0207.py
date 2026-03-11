from math import ceil
n,x,y=map(int,input().split())
print(max(0,n-ceil(float(y)/x)))