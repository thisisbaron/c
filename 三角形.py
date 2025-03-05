import math

a = input("输入a的长度：")
b = input("输入b的长度：")
c = input("输入c的长度：")
a = float(a)
b = float(b)
c = float(c)
# 计算半周长
p = (a + b + c) / 2
# 使用海伦公式计算面积
s = math.sqrt(p * (p - a) * (p - b) * (p - c))
# 检查是否可以形成三角形
if a + b > c and a + c > b and b + c > a:
    print(s)
else:
    print("不是三角形")
