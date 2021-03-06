import sys
n = int(sys.stdin.readline())

stack = []

for _ in range(n):
    a = sys.stdin.readline().split()
    b = a[0]

    if b=="push":
        val = a[1]
        stack.append(val)
    elif b=="pop":
        if len(stack)==0:
            print("-1")
        else:
            print(stack.pop())
    elif b=="size":
        print(len(stack))
    elif b=="empty":
        if len(stack)==0:
            print("1")
        else:
            print(0)
    elif b=="top":
        if len(stack)==0:
            print("-1")
        else:
            print(stack[-1])
