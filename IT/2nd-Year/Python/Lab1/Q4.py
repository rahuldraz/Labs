'''

'''

def evenIndex(str):
    n=[]
    for i in range(0, len(str)-1, 2):
        n.append(str[i])
    print(','.join(n))
inp = "pynative" 
evenIndex(inp)
