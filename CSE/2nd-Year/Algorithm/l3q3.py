import random

def search (mylist, n, x):
    for i in range(0,n):
        if(mylist[i]==x):
            return 0
    return -1
         
mylist=[]
a=int(input("enter list range: "))
n=a

for i in range(a):
  m=random.randint(1,100)
  mylist.append(m)
print(mylist)

x=int(input('enter any integer to search: '))
result=search(mylist, n, x)
if(result==0):
    print('element is present.')
else:
    print('element is not present.')