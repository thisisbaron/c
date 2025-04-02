def A(x):  
    global y  
    y = 1000  
    x = 0  

def B(x):  
    global y  
    y = 0  
    x = 0  

# 主函数  
x = 1  
y = 2  
A(x)  
B(x)  
print(x, y)
