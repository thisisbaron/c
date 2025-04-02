def sum(m):
    s = 0
    for n in range(1, m + 1):
        s = s + n
    return s


def sumAll(n):
    s = 0
    for m in range(1, n + 1):
        s = s + sum(m)
    return s


n = input("n=")
n = int(n)
print("总和是", sumAll(n))
