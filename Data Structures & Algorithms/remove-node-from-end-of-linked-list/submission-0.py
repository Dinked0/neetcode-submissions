# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr = head
        l = 0
        while curr:
            curr = curr.next
            l+=1
        if l == n:
            return head.next
        curr = head
        prev = head
        for i in range(l-n):
            if i > 0:
                prev = prev.next
            curr = curr.next

        prev.next = curr.next
        return head
