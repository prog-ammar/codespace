n=7
for i in range(7):
    for spaces in range(i):
        print(" ",end="")
    print("*",end="")
    for spaces in range(2*(n-i-1)):
        print(" ",end="")
    if(i!=n-1):
        print("*",end="")
    print("")