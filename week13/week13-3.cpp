// week13-3.cpp 學習計畫 Linked List 第三題
// LeetCode 2. Add Two Numbers 直視家法、逐位相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans = new ListNode(999);
        ListNode*ans2 = ans;
        int carry = 0;//
        while (l1 != nullptr || l2 != nullptr){
            int now = carry;
            if(l1 != nullptr){
                now += l1->val;
                l1 = l1->next; //接下一筆
            }
            if(l2 != nullptr){
                now += l2->val; //把值加進去
                l2 = l2->next; //接下一把
            }
            ans2->next = new ListNode( now%10 ); //個位數,準備一個node
            ans2 = ans2->next;//接下一筆
            carry = now / 10;//進位的部分
        }
        if(carry>0) ans2->next = new ListNode( carry );
        return ans->next;
    }
};