// 给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。

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
    ListNode* swapPairs(ListNode* head) {
            ListNode* _dummyNode = new ListNode(0);
            _dummyNode->next = head;
            ListNode* temp = _dummyNode;
            // _dummyNode = head;
            while (_dummyNode->next != NULL && _dummyNode->next->next != NULL){
                ListNode* node1 = _dummyNode->next;
                ListNode* node2 = _dummyNode->next->next;
                _dummyNode->next = node2;
                node1->next = node2->next;
                node2->next = node1;
                _dummyNode = node1;
            }
            return temp->next;
        
    }
};
