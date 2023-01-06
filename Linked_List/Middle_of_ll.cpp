//https://leetcode.com/problems/middle-of-the-linked-list/submissions/871690639/
class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

int Middle_element(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while( fast != nullptr && fast->next != nullptr ){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}