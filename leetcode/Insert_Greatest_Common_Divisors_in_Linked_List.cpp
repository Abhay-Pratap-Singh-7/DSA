#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void insertAtHead(ListNode* &head, int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
}

void display(ListNode* &head) {
    ListNode* current = head;
    while ( current != nullptr ) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

ListNode *insertGreatestCommonDivisors(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *curr = head;
    while (curr != nullptr && curr->next != nullptr)
    {
        ListNode *temp = curr->next;
        ListNode *newNode = new ListNode(gcd(curr->val, temp->val));
        curr->next = newNode;
        newNode->next = temp;
        curr = temp;
    }
    return head;
}

int main()
{
    ListNode* head = nullptr;
    insertAtHead(head, 8);
    insertAtHead(head, 5);
    insertAtHead(head, 10);
    insertAtHead(head, 6);
    insertAtHead(head, 18);
    display(head);
    head = insertGreatestCommonDivisors(head);
    display(head);
    return 0;
}