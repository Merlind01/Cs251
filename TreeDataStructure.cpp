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


*/
