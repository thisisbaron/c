w=input("输入一个数：")
w=int(w)
if w == 0:
    s="周天"
elif w == 1:
    s="周一"
elif w == 2:
    s="周二"
elif w == 3:
    s="周三"
elif w == 4:
    s="周四"
elif w == 5:
    s="周五"
elif w == 6:
    s="周六"
else:
    s="不合法"
print(s)
