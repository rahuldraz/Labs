a=0
b=1
s=0
n=int(input('Enter fibonacci range: '))
for i in range(n):
    print(a)
    s=a+b
    a=b
    b=s