/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        // ListNode *first = head;
        // ListNode *second;
        ///
        // int count = 0;
        // while(count != k) {
        //     count++;
        //     first = first->next;
        // }
        // second = first;
        // while(count != n-k) {
        //     count++;
        //     second = second->next;
        // }
        // swap(first->val, second->val);
        // return head;
        
        /*hint: convert list into array
                then swap values as we do in the array*/
        // int length = 0;
        // while(head != NULL) {
        //     length++;
        //     head = head->next;
        // }
//         list<int> List = *head;
//         vector<int> arr;
//         int count = 0;
//         while(head != NULL) {
//             arr.push_back(head->val);
//             head = head->next;
//         }
//         int n = arr.size();
//         swap(arr[k-1], arr[n-k+1]);
        
//         for(int i = 0; i < n; i++) {
//             List.push_back(arr[i]);
            
//         }
//         return List;
        ListNode *ptr1 = head, *ptr2 = head, *kth = NULL;
        while (--k)
            ptr1 = ptr1->next;
        
        kth = ptr1;
        ptr1 = ptr1->next;   
        
        while (ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(ptr2->val, kth->val);
        return head;
    }
};
