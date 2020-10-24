'''
Write a program that asks the user to enter three numbers (use three separate input statements). Create variables called total and average that hold the sum and average of the three numbers and print out the values of total and average

'''

a, b,c = [int(x) for x in input("Enter three numbers comma seperated\n").split(',')] 
sum=a+b+c
avg=sum/3
print("Sum-"+str(sum)+ "\nAvg-", str(avg))
