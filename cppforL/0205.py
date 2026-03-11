import sys
ch = sys.stdin.read(1)
if ch and ord(ch) % 2 == 1:
    print("YES")
else:
    print("NO")