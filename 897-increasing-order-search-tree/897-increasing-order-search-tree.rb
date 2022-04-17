def increasing_bst(root, tail = nil)
  return tail unless root
  
  result = increasing_bst(root.left, root)
  root.left = nil
  root.right = increasing_bst(root.right, tail)
  
  result
end