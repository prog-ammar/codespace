n=7
for i in range(7):
    for spaces in range(n-i-1):
        print(" ",end="")
    print("*",end="")
    if i==3:
        for j in range(2*i-1):
            print("*",end="")
    else:
        for j in range(2*i-1):
            print(" ",end="")
    if i!=0:
        print("*",end="")
    print("")
