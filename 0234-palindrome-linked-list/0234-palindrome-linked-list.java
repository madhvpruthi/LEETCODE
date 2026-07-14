/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
//         Stack <Integer> st = new Stack<>();

//         ListNode temp = head;
//         while(temp!= null){
//             st.push(temp.val);
//             temp=temp.next;
//         }

//         temp=head;
//         while (temp != null) {
//             if (temp.val != st.peek()) {
//                 return false;
//             }
//             st.pop();
//             temp=temp.next;
//         }
//         return true;
//     }
// }
    
    ListNode slow = head;
    ListNode fast = head;
    while(fast != null && fast.next != null){
        slow=slow.next;
        fast=fast.next.next;
    }

    ListNode node = null;
    while(slow!=null){
        ListNode nextnode = slow.next;
        slow.next=node;
        node=slow;
        slow=nextnode;

    }

     ListNode first = head;
        ListNode second = node;

        while (second != null) {
            if (first.val != second.val) {
                return false;
            }

            first = first.next;
            second = second.next;
        }

        return true;

    }

}