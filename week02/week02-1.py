# (+程式碼) Python 對應的版本
print('請輸入兩個整數')
a, b = list(map(int, input().split() ))
print('你輸入了2個數字, 直式加法:')
print( f'{a:5}') # 使用 f'字串' 配合 {大括號} 及 冒號:5 調格式
print( f'{b:5}')
print('--------')
print( f'{a+b:5}')