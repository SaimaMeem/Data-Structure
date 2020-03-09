#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

struct LinkedList {
public:
    struct Node {
        string data;
        struct Node *link;
    };
    struct Node *head = NULL;

    void insert(string input) {
        struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
        newNode->data = input;
        newNode->link = head;
        head = newNode;
    }

    struct Node *getHead() {
        return head;
    }

    void print() {
        struct Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }

    bool search(string input) {
        struct Node *temp = head;
        while (temp != NULL) {
            if (temp -> data == input) return true;
            temp = temp -> link;
        }
        return false;
    }
};

LinkedList *list;
int arraySize;

int findNumber(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch -= ('A' - 'a');
    }
    return ch - 'a' + 1;
}

int getIndex(string input) {
    int index = 0;
    for (int i = 0; i < input.size(); ++i) {
        index ^= findNumber(input[i]);
    }
    index %= arraySize;
    return index;
}

void insertValue(string input) {
    int index = getIndex(input);
    list[index].insert(input);
}

bool searchValue(string input) {
    int index = getIndex(input);
    return list[index].search(input);
}

int main() {
    int n;
    string input;

    cout << "Enter the size of the array: ";
    cin >> arraySize;
    cout << "Enter the number of input: ";
    cin >> n;
    cout << "now enter the strings: ";

    list = (struct LinkedList*) malloc((arraySize + 1) * sizeof(struct LinkedList));

    for (int i = 0; i < n; ++i) {
        cin >> input;
        insertValue(input);
    }


    string search;
    cout << "Enter the element to search for: ";
    cin >> search;
    if (searchValue(search)) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl;
    }

    return 0;
}





