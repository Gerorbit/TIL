import sys

n = int(sys.stdin.readline().rstrip())
cnt1 = 0
cnt2 = 0
queue = []
for _ in range(n):
    data = list(map(str,sys.stdin.readline().split()))
    if(data[0]=='push'):
        queue.append(int(data[1]))
        cnt1+=1
    elif (data[0] == 'pop'):
        if (cnt1 == 0):
            print("-1")
        else:
            print(queue[cnt2])
            cnt1-=1
            cnt2+=1
    elif (data[0] == 'front'):
        if (cnt1 == 0):
            print("-1")
        else:
            print(queue[cnt2])
    elif (data[0] == 'back'):
        if (cnt1 == 0):
            print("-1")
        else:
            print(queue[-1])
    elif (data[0] == 'size'):
        print(cnt1)

    elif (data[0] == 'empty'):
        if (cnt1 == 0):
            print("1")
        else:
            print("0")