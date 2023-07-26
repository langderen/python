#Daydayup.py
dayfactor=float(input('请输入每天要进步还是退步的占比'))
dayup=1.0
for i in range(365):
    if i%7 in[6,0]:
        dayup=(1-dayfactor)*dayup
    else:
        dayup=(1+dayfactor)*dayup
#判断1年内的节假日退步，工作日进步。
print('一年后你的进步程度{:.3f}'.format(dayup))