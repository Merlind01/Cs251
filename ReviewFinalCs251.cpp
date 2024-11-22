/* 
Unique data structures / Important topics
 - Optional (if answer is 0 will return no pointer) / For very specific cases
 - Bloom Filter (bit array) (uses K-Hash functions)
 - Rope (similar to string / intert to front,middle, or back)
 - Skip Lists
 - Zippers (Cursors / Current Location of the Cursor)
 - Heaps (Min / Max)
 - Hash Tables (For sorting info that gets ordered at a large amount)        **** 
       Table saves location of data
       
       []  <- First peice of data might go here
       []
       []
       []  <- second might go here (Doesnt require going from top to bottom)
       []
       []
       
       Collision may occur when there is not a space in between data for example to store 10 values its recommended to make a hash table that can store 20:
              To clear a collision another hash table can be made

       [A]
       [ ]  <- A2 asked to be placed so will go here
       [B]
       [ ]    
       [C]

 - Fractals

Final Review

- No coding 
- Basic Data types
   int
   pointers (what it holds/does)
      holds an address that can be pointed to a value (that value can always be found using the pointer)
-algethrim
   method to solve a problem (works everytime)
- stacks LIFO
     push
     pop
     top
     empty
     size
- queues FIFO
     push
     pop
     front
     back
     empty
     size
- linked list (made up of /operation)
     Traversal
     insertion
     delettion
     sorting
- how to make stacks/queues
     stack<int> myStack;
     
     #include <queue>   
          Queue<int> myQueue;
- recurssion (repeats the function until the condition is satisified used in MaxHeap)
- binary trees (made up of)
      childs nodes
      parent nodes
      poitners connecting nodes together 
      root node K(top most node)
- binary search/brute force search
- different sorts (bubble/heap etc)
      bubble sort
      quick sort
      heap sort
      merge sort
- directed graph
      
- graph traversal (shortest path etc)
- weighed graphs (cost involved to traverse)

*/
