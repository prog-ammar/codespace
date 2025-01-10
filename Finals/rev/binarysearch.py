def main():
    x=int(input("Enter no of elements: "))
    arr=[]
    for i in range(x):
        c=int(input(""))
        arr.append(c)
    t=int(input("Enter target :"))
    print(f"found at {binarysearch(arr,t)}")
    
    
def binarysearch(arr,target):
    left=0
    right=len(arr)-1
    while left<=right:
        mid=int((left+right)/2)
        if(arr[mid]==target):
            return mid
        elif(arr[mid]<target):
            left=mid+1
        elif(arr[mid]>target):
            right=mid-1
            
main()