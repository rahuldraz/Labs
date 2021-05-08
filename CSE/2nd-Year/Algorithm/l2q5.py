import random
a=[]
r= int(input("Array range: "))
n= int(input("Number of elements: "))

for i in range(n):
    b=random.randrange(1,r)
    a.append(b)
print("Generated array: ", a)

#finding max and min of the array
max_= min_= arr[0]
for i in range(1,n):
    if(a[i]>max_):
        max_= a[i]
    elif(a[i]<min_):
            min_= a[i]
#printing results
print("The length of array, maximum and minimum is: ".format(n, max_, min_))