(to simplify consider sort in ascending order)

# If I have the array organized in k sorted sections, merge all of them using a Heap:
    we will have a awnser_array, which will have the sorted array at the end of the algorithm
    
    insert first elements of all sections (which is the smallest of each one) in the Heap    
    
    while the Heap is not empty:
        take off the Heap the pair (element, element' section)
        insert the element in the awnser_array
        if the section of the element is not empty
            take off the next smallest element of it
            insert in the Heap the next smallest element
         
         
# How to create this sorted sections? Some possibilities:

## I) search for good sections in the input

    1) search linearly through the array if there is a sequence of elements in ascending or descending order
    2) if the pattern break (was descending and it becames ascending or the other way around):
        a)if was descending, reverse this section
        insert in a queue the section
    3) merge, with the heap, all the sections


## II) binary insertion sort (TimSort approach)

    Make binary insertion sort in sections of size 32


## III) both

    Make the first search, create small sorted sections
    Complete the sections until they are "big enough"
    (if they are bigger, there will be less sections, and then the Heap will be smaller)