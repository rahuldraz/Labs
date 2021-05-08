arr=[]
n=int(input("Enter N for N x N matrix: "))         
print("Enter the element: ")
for i in range(n): 
   row=[]                                      
   for j in range(n): 
      row.append(int(input()))           
      arr.append(row)                      
print(arr)

brr=[]
print("Enter the element: ")
for i in range (n): 
   row=[]                                      
   for j in range(n): 
      row.append(int(input()))           
      brr.append(row)                      
print(brr)

result = [[0,0,0], [0,0,0], [0,0,0]] 
for i in range(len(arr)): 
   for j in range(len(brr[0])): 
      for k in range(len(brr)): 
         result[i][j] += arr[i][k] * brr[k][j] 
print("The Resultant Matrix Is: ")
for r in result: 
   print(r) 