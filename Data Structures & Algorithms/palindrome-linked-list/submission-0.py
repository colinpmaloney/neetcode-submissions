# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        preHead = ListNode(0, next=head)
        slow = preHead
        fast = preHead

        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next

        listOne = []
        listTwo = []
        fast = head
        while slow:
            listOne.append(slow.val)
            slow = slow.next
            listTwo.append(fast.val)
            fast = fast.next
        
        print(listOne, listTwo[::-1])
        return listOne == listTwo[::-1]