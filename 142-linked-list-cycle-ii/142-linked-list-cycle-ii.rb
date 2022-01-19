# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} head
# @return {ListNode}
def detectCycle(head)
  fast_node = head
  slow_node = head
  
  while fast_node && fast_node.next
    slow_node = slow_node.next
    fast_node = fast_node.next.next
    break if slow_node == fast_node
  end
  
  return nil if !fast_node || !fast_node.next || !slow_node
  
  slow_node = head
  
  while slow_node != fast_node
    slow_node = slow_node.next
    fast_node = fast_node.next
  end
  
  slow_node
end