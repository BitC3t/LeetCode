// (21) Merge Two Sorted Lists
//
//


#include <iostream>
#include <list>
using namespace std;

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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        list<int> listOne;
        list<int> listTwo;
        ListNode* mergedList;

        while(list1 != nullptr) {
            listOne.push_back(list1->val);
            list1 = list1->next;
        }

        while(list2 != nullptr) {
            listTwo.push_back(list2->val);
            list2 = list2->next;
        }

        listOne.sort();
        listTwo.sort();
        listOne.merge(listTwo);

        for(auto it = listOne.begin(); it != listOne.end(); it++) {
            mergedList->val = *it;
            mergedList = mergedList->next;
        }

        return mergedList;
    }
};