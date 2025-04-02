def enter():
    global province
    global city
    province = input("省份：")
    city = input("城市：")

def show():
    print("省份：" + province + " 城市：" + city)

province = ""
city = ""
enter()
show()
