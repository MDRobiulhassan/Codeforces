import sys
sys.set_int_max_str_digits(5040)


def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n - 1)


t = int(input())
for _ in range(t):
    n, d = map(int, input().split())

    n = min(n, 7)
    ans = factorial(n)

    s = int(str(k) * factorial(n))
    num = int(s)

    for i in range(1, 10, 2):
        if num % i == 0:
            print(i, end=' ')
    print()
