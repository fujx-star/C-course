// debug.c
// VS中调试的简单例子
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* removeNth(struct ListNode* head, int n) {

    // 特殊情况处理
    if (head->next == NULL) {
        return NULL;
    }
    if (n == 1) {
        return head->next;
    }

    struct ListNode* temp = head;   // 保存头节点

    // 找到第n-1个节点
    int cnt = 1;
    while (cnt < n - 1) {
        head = head->next;
        cnt++;
    }

    head->next = head->next->next;  // 删除第n个节点

    return temp;    // 返回头节点

}

void printList(struct ListNode* head) {

    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");

}

int main() {

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;
	head->next->next->next->next = NULL;
    // 此时链表状态为1->2->3->4

    printf("Before removeNth:\n");
    printList(head);

    head = removeNth(head, 2);

    printf("After removeNth:\n");
    printList(head);

	free(head->next->next->next);
	free(head->next->next);
	free(head->next);
	free(head);

    return 0;
}
// 输出
// Before removeNth:
// 1 2 3 4
// After removeNth:
// 1 3 4
