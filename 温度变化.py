T=input('输入一个温度：')
if T[-1] in ['F' , 'f']:
    C=(eval(T[0:-1])-32)/1.8
    print('你输入的华氏温度转化为摄氏温度为：{:.2f}C'.format(C))
elif T[-1] in ['C' , 'c']:
    F=(eval(T[0:-1])*1.8+32)
    print('你输入的摄氏温度转化成为华氏温度为：{:.2f}F'.format(F))
else:
    print('Wrong')