for i in range(int(input())):
    n = int(input())
    temp = 45
    mod = n % 9
    n = n -  mod
    ans = n // 9
    tempSum = 0
    for i in range(1, mod + 1):
        tempSum = tempSum + i
    print(int(tempSum + (ans * temp)))
