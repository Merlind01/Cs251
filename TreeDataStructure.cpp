/*
    ()  - Root and Parent Node
   / \  
  () ()   Parent and Child Node
 /
()        Child Node    

Tree Datatypes do not have to be in order
Ex
     () 
    /  \  
  ()    () 
 /        \     <-- Valid Tree
()         ()        //
          /  \
        ()    ()     Sub Tree      (While LeftSide and Right Side is a Sub Tree as well) //From any one node to all children being connected
       /
      ()            //


          Tree Traversals
Pre-Order  - Parent will have highest priority then left (go left until you can no longer go then as your going back up the tree get the right children)
In-Order - Left then parent then Right (after all the way left, parent, then right child if any then parent right child etc)
Post-Order - Left then Right then Parent [2 5 6 9 8 3 7]


Binary Search Tree
Everynode should be greater than its left child but higher than its right child
left < parent > right


            (5)
           /   \
         (3)   (8)
          \    / \
         (4)  (7) (10)
Case 1: Delete Leaf Node
        If Node (4) wants to be removed then remove
Case 2: Node to be deleted with 1 child 
        If Node (3) wants to be removed swap child of 3 then remove 3 (No Children of 3 will be removed as well)
Case 3: Node to be deleted with 2 children
        If Node (8) wants to be removed swap 7 or 10 as long as it causes the tree the least amount of disruption (Keeped Sorted)
(Take Minimum Node from Right subtree OR Take Maximum Node from the Left subtree)
Case 4:
        


*/        
