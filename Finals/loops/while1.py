n=int(input("Enter An Number : "))
while n > 0:
    remainder=(n%10)
    print(f"{remainder}",end="")
    n=n//10
    