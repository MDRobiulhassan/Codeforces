t = int(input())

for _ in range(t):
    s = input().strip()
    s = ''.join(sorted(s))

    for i in 'abcdefgh':
        if i == s[1]:
            continue
        print(i + s[0])

    for i in range(1, 9):
        if i == int(s[0]):
            continue
        print(s[1] + str(i))
