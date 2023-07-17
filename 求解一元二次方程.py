a=int(input('a='))
b=int(input('b='))
c=int(input('c='))
if a==0:
    print('x=',-c/b)
else:
    d=b**2-4*a*c
    if d==0:
        print('x=',-b/(2*a))
    if d>0:
        print('x1=',-b+d**0.5/(2*a),'  x2=',-b+d**0.5/(2*a))
    if d<0:
        print('x无解')