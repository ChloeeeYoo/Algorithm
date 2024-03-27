# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        head = ListNode()
        node = head

        while(list1 and list2):
            print("%d %d" % (list1.val, list2.val))
            if list1.val <= list2.val:
                node.next = list1
                list1 = list1.next
                
            else:
                node.next = list2       
                list2 = list2.next
            node = node.next
        
        # last largest element, how to deal with it?
        node.next = list1 or list2
        return head.next            ## best keypoint. original head had the 0 initial point that is unnecessary value.
