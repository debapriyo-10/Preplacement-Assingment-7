def printNto1(n):
    if n == 0:
        return
    print(n, end=' ')
    printNto1(n - 1)

n = int(input())
printNto1(n)