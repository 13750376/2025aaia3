// week14-2.cpp 學習計畫 Linked List 第二題
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head; //終止條件
        //5行搞定涵是呼叫涵式
        ListNode*ans = reverseList(head->next);
        head->next->next = head;//現在的下一筆
        head->next = nullptr;//收尾
        return ans;
    }
};