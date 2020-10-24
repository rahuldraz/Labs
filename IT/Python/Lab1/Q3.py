'''
Given a range of first 10 numbers, Iterate from start number to the end number and print the sum of the current number and previous number

'''

num = list(range(10))
last = 0
for i in num:
    sum = last + i
    print('Current ->'+ str(i) + ' Previous-> ' + str(last) +' Sum->'+ str(sum))
    last=i
