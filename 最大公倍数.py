a = int(input("输入a: "))
b = int(input("输入b: "))

c = max(a, b)

# 从较大数开始循环，直到 a*b
for d in range(c, a * b + 1):
    if d % a == 0 and d % b == 0:
        print("最小公倍数：", d)
        break  # 找到最小公倍数后退出循环
