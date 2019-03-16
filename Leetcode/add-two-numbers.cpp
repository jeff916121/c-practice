// https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void addTwoNumbers(ListNode* ptr,int carryin, ListNode* l1, ListNode* l2) {
        if(l1==nullptr && l2!=nullptr){
            ptr->next= new ListNode((l2->val+carryin)%10);
            carryin = (l2->val+carryin)/10;
            addTwoNumbers(ptr->next,carryin,l1,l2->next);
            return;
         }
        if(l1!=nullptr && l2==nullptr){
            ptr->next= new ListNode((l1->val+carryin)%10);
            carryin = (l1->val+carryin)/10;
            addTwoNumbers(ptr->next,carryin,l1->next,l2);
            return;
         }
        if(l1!=nullptr && l2!=nullptr){
            ptr->next = new ListNode((l1->val+l2->val + carryin)%10); 
            carryin = (l1->val + l2->val + carryin)/10;
            addTwoNumbers(ptr->next,carryin,l1->next,l2->next);
            return;
        }     
        else if(carryin==1){
            ptr->next = new ListNode(carryin); 
            return;
        }
        else{
            return;
        }
    };
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        int carryin = 0;
        if(l1==nullptr && l2!=nullptr){
            head = new ListNode(l2->val); 
         }
        else if(l1!=nullptr && l2==nullptr){
            head = new ListNode(l1->val); 
         }
        else if(l1!=nullptr && l2!=nullptr){
            carryin = (l1->val + l2->val)/10;
            head = new ListNode((l1->val+l2->val)%10); 
        }
        else{
            return nullptr;
        }
        addTwoNumbers(head, carryin, l1->next, l2->next);
        return head;
    }  
};