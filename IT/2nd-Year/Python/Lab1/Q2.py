#!/usr/bin/python3 
'''
Write a program which can compute the factorial of a given numbers. The results should be printed in a comma-separated sequence on a single line. Suppose the following input is supplied to the program: 8 Then, the output should be: 40320
'''

f=1
x=int(input("Enter Number:"))
if(x<0):
    print("Factorial Dosent Exist")
elif x==0:
    print("1")
else:
    for i in range(1,x+1):
        f=f*i
    print(f)


