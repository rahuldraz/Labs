n=3
m=4

def transpose(A,B):
    for i in range(n):
        for j in range(m):
            B[i][j]=A[j][i]

A=[[5,3,4],
   [6,8,9],
   [7,3,5]]
B=[[0 for i in range(m)] for j in range(n)]
transpose(A,B)

print("Transposed matrix: ")
for i in range(n):
    for j in range(m):
        print(B[i][j]," ",end='')
    print()