n=7
for i in range(n):
    for spaces in range(n):
        if(spaces==i or spaces==n-i-1):
            print("*",end="")
        else:
            print(" ",end="")
    print("")