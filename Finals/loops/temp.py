n = int(input("Enter Number: "))
n1 = 1
n2 = 1

for i in range(1, n + 1):
    if i == 1:
        fibonacci = n1
    elif i == 2:
        fibonacci = n2
    else:
        fibonacci = n1 + n2
        n1 = n2
        n2 = fibonacci
    print(fibonacci,end=" ")
