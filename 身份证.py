m=input("输入身份证号：")

if len(m) != 18:
    print("身份证不合法")
else:
    a=int(m[-2])
    if a % 2 == 0:
        print("女")
    else:
        print("男")
