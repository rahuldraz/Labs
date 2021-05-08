list=[]
avg=0.0
n=int(input('Enter the number of elements in a list: '))
for i in range(1, n+1):
    ele=int(input('enter element: '))
    list.append(ele)
list.sort()
print("largest no. is: ",list[-1])
print("second largest no. is: ", list[-2])
avg= (list[-1]+list[-2])/2
print("Average of the numbers: ", avg)