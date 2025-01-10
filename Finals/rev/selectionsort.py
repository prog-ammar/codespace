






def main():
    c=input("Enter 1 for 1d Array\nEnter 2 for 2d Array : ")
    if(c=="1"):
        n=int(input("Enter no of Elements : "))
        arr=[]
        for i in range(n):
            x=int(input(""))
            arr.append(x)
        selectionsort(arr)
        for i in arr:
            print(f"{i} ",end=" ")
    if(c=="2"):
        r=int(input("Enter no of rows : "))
        c=int(input("Enter no cols"))
        arr=[[0 for i in range(c)] for j in range(r)]
        for i in range(r):
            for j in range(c):
                arr[i][j]=int(input(""))
        selectionsort2d(arr,r,c)
        for i in range(r):
            for j in range(c):
                print(f"{arr[i][j]}",end="")
            print("")
            
        
def selectionsort(arr):
    for i in range(len(arr)):
        min_index=i
        for j in range(i+1,len(arr)):
            if(arr[min_index]>arr[j]):
                min_index=j
        if min_index!=i:
             arr[min_index],arr[i]=arr[i],arr[min_index]
        
def selectionsort2d(arr,r,c):
    for j in range(c):  # Iterate over columns
        for i in range(r):  # Iterate over rows
            min_index = i
            for k in range(i + 1, r):
                if arr[min_index][j] > arr[k][j]:
                    min_index = k
            if min_index != i:
                arr[min_index][j], arr[i][j] = arr[i][j], arr[min_index][j]
    
    # Then, sort each row (horizontally)
    for i in range(r):  # Iterate over rows
        for j in range(c):  # Iterate over elements in the row
            min_index = j
            for k in range(j + 1, c):
                if arr[i][min_index] > arr[i][k]:
                    min_index = k
            if min_index != j:
                arr[i][min_index], arr[i][j] = arr[i][j], arr[i][min_index]
           
   
 
main()        