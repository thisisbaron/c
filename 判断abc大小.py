a = input("输入a:")
a = float(a)
b = input("输入b:")
b = float(b)
c = input("输入c:")
c = float(c)

if a != b and c > b:
    min = b
elif b > c and a > c:
    min = c
elif c > a and b > a:
    min = a

print(min)
