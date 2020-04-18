def arrayManipulation(n, queries):
    list = [0]*(n+1)
    for i in queries:
        x, y, incr = i
        list[x-1] += incr
        if((y)<=len(list)): list[y] -= incr;
    max = x = 0
    for i in list:
        x=x+i
        if(max<x):
            max=x
    return max