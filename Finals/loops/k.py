choice=input("enter your choice:")
print("enter 1 for check balance")
print("enter 2 for deposit money")
print("enter 3 for withdraw money")
print("enter 4 for exit")
if choice=="1":
   balance=("input your balance")
   if choice=='2':
      deposit=input("enter the amount you want to deposit")
      if choice=='3':
         money=input("enter the amount you want to withdraw")
         if money<=deposit:
            print(deposit-money)
            if choice=='4':
               print("EXIT")

    