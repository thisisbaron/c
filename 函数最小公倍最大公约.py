# 最大公约数函数
# d最小为1，必定会返回
def maxDivider(a, b):
    c = a
    if b < a:
        c = b
    for d in range(c, 0, -1):
        if a % d == 0 and b % d == 0:
            return d

# 最小公倍数函数
# d最多为a*b，必定返回
def minMultiplier(a, b):
    c = a
    if b > a:
        c = b
    m = a * b
    for d in range(c, m + 1, 1):
        if d % a == 0 and d % b == 0:
            return d

# 主程序
a = input("a")
b = input("b")
a = int(a)
b = int(b)

print("最大公约数:", maxDivider(a, b))
print("最小公倍数:", minMultiplier(a, b))
