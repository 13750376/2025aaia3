// week13-2月.cpp 學習計畫 Linked List 第1題
// 21. Merge Two Sorted Lists 左邊list1 右邊list2 合起來
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans = new ListNode(999);
        ListNode*ans2 = ans; // ans2 幫忙 ans 把尾巴接好
        while(list1 != nullptr && list2 != nullptr ){
            if(list1->val < list2->val){ // 左邊小,先接左邊
                ans2->next = list1; // 接起來
                list1 = list1->next; // 往右下一筆
                ans2 = ans2->next; // 往右下一筆
            }else{//右邊小,先接右邊
                ans2->next = list2; // 接起來
                list2 = list2->next; // 往右下一筆
                ans2 = ans2->next; // 往右下一筆
            }
        }
        if(list1 != nullptr) ans2->next = list1;
        if(list2 != nullptr) ans2->next = list2;
        return ans->next;
    }
};
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