# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        start = ListNode(None, head)
        current = start
        n = current.next


        while n:
            if n.val != val:
                current.next = n
                current = current.next
                n = n.next
            else:
                n = n.next
        current.next = n
        
        return start.next