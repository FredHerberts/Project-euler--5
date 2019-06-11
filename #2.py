import time
start = time.time()

primelist = [2,3,5,7,11,13,17,19]

def LCM_calc(y,LCM):
    for x in primelist:
        y=1
        while 20 > y:
            y = y*x
            if 20 > y:
                LCM = LCM *x
    print(LCM)

LCM_calc(1,1)
end = time.time()
print(end - start)
