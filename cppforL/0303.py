data = list(map(int,input().split()))
n = data[0]
nums = data[1:]

if n == 1:
    print("Jolly")
else:
    diffs = []
    for i in range(1,n):
        diffs.append(abs(nums[i] - nums[i-1]))
    diffs.sort()
    jolly = True
    for i in range(1,n):
        if diffs[i-1] != i:
            jolly = False
            break
    print("Jolly" if jolly else "Not jolly")