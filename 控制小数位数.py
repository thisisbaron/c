# 输入 p
p = 0
while p <= 0:
    p = input("Enter p:")
    p = int(p)

# 输入 q
q = 0
while q <= 0:
    q = input("Enter q:")
    q = int(q)

# 输入 n
n = 0
while n <= 0:
    n = input("Enter n:")
    n = int(n)

# 计算 p/q
s = str(p // q)
x = p % q
if x != 0:
    s = s + "."

# 当余数不为0且迭代次数小于n时，继续计算小数部分
i = 0
while x != 0 and i < n:
    x = 10 * x
    s = s + str(x // q)
    x = x % q
    i = i + 1

# 输出结果
print("%d/%d=%f" % (p, q, p / q))
print("%d/%d= %s" % (p, q, s))
