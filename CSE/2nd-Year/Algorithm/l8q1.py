"""


Algorithm:
1. define the sorting algorithm:
    # descending merge sort implication to sort both wt_arr and val_arr together at once
    # instead of sorting them separately based on left_array[i] vs right_array{j] comparison

    # We sort them together based on left_(unit value)[i]             vs          right_(unit value)[j]
    #  ------------------------------left_val_arr[i]/left_wt_array[i] vs right_val_arr[i]/right_wt_array[j]
    
    # checking base condition
        generating sub arrays of wt_arr and val_arr
        # left sub array of weights
        # left sub array of values
        # right sub array of weights
        # right sub array of values
    # sorting the sub-arrays by calling merge_sort() on them
    
    merging
    while iterators i and j are less than length of left sub array and right sub array respectively
        # comparing unit values and sorting accordingly
        # if left_(unit value)[j] < right_(unit value)[i]
            # assign value from right sub array of weights to wt_arr
            # assign value from right sub array of values to val_arr
        else
            # assign value from left sub array of weights to wt_arr
            # assign value from left sub array of values to val_arr
    
     # append left out elements to both wt_arr and val_array

2. def frac_knap(array of weights of items, array of value of each item, knapsack capacity)
    # initialise x as list of fraction of items used
    # initialise weight of items picked = 0
    
    # sort the lists using merge_sort(w,v)
    
    # logic for choosing items
    # while weight of items chosen is less than knapsack capacity
        # if chosing next item will still result in total weight being less than knapsack capacity
            # chose it in whole (Whole 1 ration)
            # update the weight
        # else
            # only pick that much part of item, so that weight doesn't exceed knapsack capacity
            # weight is now the same as capacity
            
            
Source Code:
"""

def merge_sort(wt_arr, val_arr):
    
    # checking base condition
    if len(wt_arr)>1:
        mid = len(wt_arr)//2

        lwt_arr = wt_arr[:mid]  
        lval_arr= val_arr[:mid]  
        rwt_arr = wt_arr[mid:] 
        rval_arr = val_arr[mid:]  

        # sorting the sub-arrays
        merge_sort(lwt_arr, lval_arr)
        merge_sort(rwt_arr, rval_arr)

        # merging
        i = j = k = 0
        while i < len(lwt_arr) and j < len(rwt_arr):
            if rval_arr[j]/rwt_arr[j] > lval_arr[i]/lwt_arr[i]: 
                wt_arr[k] = rwt_arr[j]
                val_arr[k] = rval_arr[j]
                j += 1
            else:
                wt_arr[k] = lwt_arr[i]
                val_arr[k] = lval_arr[i]
                i += 1
            k += 1

        # appending left out elements to both wt_arr and val_array
        if i < len(lwt_arr): wt_arr[k:] = lwt_arr[i:]
        if j < len(rwt_arr): wt_arr[k:] = rwt_arr[j:]
        if i < len(lval_arr): val_arr[k:] = lval_arr[i:]
        if j < len(rval_arr): val_arr[k:] = rval_arr[j:]


def frac_knap(w, v, kW): # array of weights of items, array of value of each item, knapsack capacity
    # initialising x as list of fraction of items used
    x = [0]*len(w)
    
    weight = 0

    # sort the lists
    merge_sort(w, v)
    # weight of items chosen is less than knapsack capacity
    i = 0
    while weight < kW:
        if (weight + w[i]) <= kW:
            x[i] = 1
            weight += w[i]
            i += 1
        else:
            x[i] = (kW - weight)/w[i]
            weight = kW
    return w, v, x

if _name_ == "_main_":
    w = list(map(int, input().split()))
    v = list(map(int, input().split()))
    kW = int(input())
    w, v, x = frac_knap(w, v, kW)

    profit = 0
    for i in range(len(x)):
        profit += v[i]*x[i]

    print('Total profit= {}'.format(profit))
    for i in range(len(x)):
            print('{} of Item {} is chosen, Profit is {}\n'.format(x[i], i+1, v[i]*x[i]))
            