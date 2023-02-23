import sys

N = int(sys.stdin.readline())
arr = []
for i in range(N):
    tmp = sys.stdin.readline().strip().split()
    if len(arr) == 0:
        flag = False
    else:
        flag = True
    if tmp[0] == "push":
        arr.append(tmp[1])
    elif tmp[0] == "pop":
        if flag == False:
            print(-1)
        else:
            print(arr[0])
            del(arr[0])
    elif tmp[0] == "size":
        print(len(arr))
    elif tmp[0] == "empty":
        if flag == False:
            print(1)
        else:
            print(0)
    elif tmp[0] == "front":
        if flag == False:
            print(-1)
        else:
            print(arr[0])
    elif tmp[0] == "back":
        if flag == False:
            print(-1)
        else:
            print(arr[-1])
