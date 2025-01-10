

def triangle(heigth,char):
    for i in range(0,heigth):
        for j in range(0,heigth-i-1):
            print(" ",end="")
        for k in range(0,2*i+1):
            print(char,end="")
        print()


def main():
    x=int(input("Enter rows : "))
    ch=input("Enter Character : ")
    triangle(x,ch)
    
main()