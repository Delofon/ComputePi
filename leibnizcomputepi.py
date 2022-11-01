true = True
false = False
def pi(maxnum):
    piover4 = 0
    negative = false
    for n in range (1, maxnum, 2):
        if(negative):
            piover4 -= 1 / n
        else:
            piover4 += 1 / n
        negative = not negative
    print(piover4 * 4)

