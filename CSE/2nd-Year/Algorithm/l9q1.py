'''
Algo:
step 1: start
step 2: enter character and frequency of each character list
step 3: define class node
        define init which helps to initialise values to data members
        self.freq = freq        
        self.symbol = symbol    
        self.left = left       
        self.right = right      
        self.h = ''
step 4: define displayNodes
        creating the code for the Huffman tree
        checking to traverse the node if it is not an edge node
        displaying the huffman code if it is an edge node
step 5: create nodes=[]
step 6: now to convert into tree we take the range for x as range(len(chars))
        and append the frequency and characters
step 7: while len(nodes)>1:
        sorting the nodes in ascending order based on their frequency
        taking two small nodes in left and right and assigning directional values
        then combining the 2 smallest nodes to create new node as their parent
        removing two nodes and adding their parent as new node
step 8: displaying the Huffman tree created
step 9: stop


I/O: 
s -> 0
y -> 10
q -> 110
b -> 11100
f -> 11101
a -> 1111
'''

''' CODE '''

chars =['a', 'b', 'f', 'y', 'q', 's']   #character list
freq = [12, 4, 6, 32, 17, 45]           #frequency list

# A Huffman Tree Node
class node:
    def __init__(self, freq, symbol, left=None, right=None):
        self.freq = freq        #frequency of symbol
        self.symbol = symbol    # symbol name (charecter)
        self.left = left        # node left of current node
        self.right = right      # node right of current node
        self.h = ''             # tree direction (0/1)

def displayNodes(node, val=''):
    # huffman code for current node
    newVal = val + str(node.h)
 
    # if node is not an edge node then traverse inside it
    if(node.left):
        displayNodes(node.left, newVal)
    if(node.right):
        displayNodes(node.right, newVal)
 
    # if node is edge node then display its huffman code
    if(not node.left and not node.right):
        print(f"{node.symbol} -> {newVal}")

nodes=[]
#converting into tree
for x in range(len(chars)):
    nodes.append(node(freq[x], chars[x]))
 
while len(nodes) > 1:
    nodes = sorted(nodes, key=lambda x: x.freq)
 
    left = nodes[0]     #two small nodes
    right = nodes[1]
 
    #assigning directional values
    left.h = 0
    right.h = 1
 
    # combine the 2 smallest nodes to create new node as their parent
    newNode = node(left.freq+right.freq, left.symbol+right.symbol, left, right)
 
    nodes.remove(left)      #removing two nodes and adding their parent as new node
    nodes.remove(right)
    nodes.append(newNode)
 
displayNodes(nodes[0])      #the required Huffman tree