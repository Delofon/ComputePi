def pi(maxn):
    piover2 = 1
    for n in range(1, maxn):
        piover2 *= 4 * n * n
        #print(piover2, "multi")
        piover2 /= (4 * n * n - 1)
        #print(piover2, "div")
    print(piover2 * 2)

