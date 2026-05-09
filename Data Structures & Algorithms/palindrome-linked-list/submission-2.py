# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def reverse(self, head: ListNode) -> ListNode:
        cur = head
        prev = None
        while cur:
            tmp = cur.next
            cur.next = prev
            prev = cur
            cur = tmp
        
        return prev

    # 1 -> 2 -> 3 -> N
    # N <- 1 <- 2 <- 3

    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head

        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        
        slow = self.reverse(slow)

        fast = head
        while slow:
            if slow.val != fast.val:
                return False
            fast = fast.next
            slow = slow.next
        
        return True
        