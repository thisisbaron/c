# 获取用户输入
w = input("请输入月份（1-12）：")
w = int(w)
# 根据月份确定天数
if w == 1:
    print("31天")
elif w == 2:
    print("28天")
elif w == 3:
    print("31天")
elif w == 4:
    print("30天")
elif w == 5:
    print("31天")
elif w == 6:
    print("30天")
elif w == 7:
    print("31天")
elif w == 8:
    print("31天")
elif w == 9:
    print("30天")
elif w == 10:
    print("31天")
elif w == 11:
    print("30天")
elif w == 12:
    print("31天")
else:
    print("输入的月份不在范围内，请输入1-12之间的数字。")
