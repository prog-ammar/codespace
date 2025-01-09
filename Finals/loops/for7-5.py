n=7
for i in range(n):
    print("*",end="")
    for j in range(n):
        if(j==0 or j==n-1):
            print(" ",end="")
        else:
           if(j==i):
               print("*",end="")
           else:
               print(" ",end="")
    print("*",end="")
    print("")