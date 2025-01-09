n=7
for i in range(n):
    if(i==0 or i==n-1 or i==int(n/2)):
        for j in range(n):
            print("*",end="")
    else:
        print("*",end="")
        for spaces in range(n-2):
            print(" ",end="")
        print("*",end="")
    print("")