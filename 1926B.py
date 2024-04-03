t = int(input())

for _ in range(t):
    n = int(input())
    a = [list(map(int, input().split())) for _ in range(n)]

    flag = 0
    for i in range(n):
        count = 0
        for j in range(n):
            if a[i][j] == 1:
                count += 1
        if count == 1:
            flag = 1
            break

    if flag == 1:
        print("TRIANGLE")
    else:
        print("SQUARE")
