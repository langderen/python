T=input('输入一个温度：')
if T[-1] in ['F' , 'f']:    #T[-1]变量T中的倒数一个值
    print('你输入的华氏温度转化为摄氏温度为：{:.2f}C'.format(C))
elif T[-1] in ['C' , 'c']:
    F=(eval(T[0:-1])*1.8+32)    #T[0:-1]变量T中从第1位到倒数第二位
    print('你输入的摄氏温度转化成为华氏温度为：{:.2f}F'.format(F))     #{:.2f}保留2位小数
else:
    print('Wrong')
