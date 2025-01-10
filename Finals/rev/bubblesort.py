def main():
    x=int(input("Enter number of elements : "))
    arr=[]
    for i in range(x):
        arr.append(int(input("")))
    bubblesort(arr)
    for i in range(len(arr)):
        print(f"{arr[i]}",end=" ")
    print("")
    
def bubblesort(arr):
    for i in range(0,len(arr)-1):
        for j in range(0,len(arr)-i-1):
            if(arr[j+1]<arr[j]):
                arr[j+1],arr[j]=arr[j],arr[j+1]
                
main()