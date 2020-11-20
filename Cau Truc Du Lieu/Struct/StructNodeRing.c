/* 
    Môn : cấu trúc dữ liệu 
    Wrote: samreach
    web : nguyenvinhhieu.vn
    Nội dùng : danh sách liên kết vòng 
    Ngày : 26-09-2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
	int data;
	struct Node * next;
} NODE;
 
NODE * CreateNewNode(int data) {
    NODE * newNode = (NODE *) malloc (sizeof(NODE));
    newNode -> data = data;
    return newNode;
}
// Hiền thị 
void Display(NODE * tail) {
    NODE * current = tail;
    if (tail != NULL) {
        do {
            current = current -> next;
            printf(" %d -> ", current -> data);
        } while (current != tail);
    }
}

// Lấy số lượng Node 
int Length(NODE * tail) {
    NODE * current = tail;
    int i = 1;
    if (tail == NULL) {
        return 0;
    } else {
        current = current -> next;
        while (current != tail) {
            i++;
            current = current -> next;
        }
    }
    return i;
}
// thêm vào đầu
NODE * InsertAtHead(NODE * tail, int data) {
    NODE * newNode = CreateNewNode(data);
    if (tail == NULL) {
        tail = newNode;
        newNode -> next = newNode;
    } else {
        newNode -> next = tail -> next;
        tail -> next = newNode;
    }
    return tail;
}
// thêm vào cuối 
NODE * InsertAtEnd(NODE * tail, int data) {
    // simply insert at head and return the next node pointed by tail
    return InsertAtHead(tail, data) -> next;
}

// thêm vào bật ký vị trí nào với location là index 
NODE * InsertAtArbitrary(NODE * tail, int data, int location) {
    int len = Length(tail), i;
    if (location < 1 || location > len + 1) {
        printf("\nInvalid location to enter data\n");
    } else {
        if (tail == NULL) return InsertAtHead(tail, data);
        NODE * newNode = CreateNewNode(data), * current = tail;
        for (i = 1; i != location; i++) current = current -> next;
        newNode -> next = current -> next;
        current -> next = newNode;
        if (location == len + 1) tail = newNode;
    }
    return tail;
}

// xóa theo giá tỉị của Node 
NODE * DeleteByValue(NODE * tail, int data) {
    NODE * current = tail, * previous;
    if (tail == NULL) return tail;
    else if (tail == tail -> next) {
        if (tail -> data == data) {
            tail = NULL;
            free(current);
        }
        return tail;
    }
    do {
        previous = current;
        current = current -> next;
        if (current -> data == data) {
            previous -> next = current -> next;
            if (current == tail) tail = previous;
            free(current);
            current = previous -> next;
        }
    } while (current != tail);
    return tail;
}

// Xoá theo index or location 
NODE * DeleteByLocation(NODE * tail, int location) {
    NODE * current, * previous = tail;
    int len = Length(tail), i;
    if (location < 1 || location > len) {
        printf("Invalid Location to delete");
    } else if (len == 1) {
        tail = NULL;
        free(current);
    } else {
        current = tail -> next;
        for (i = 1; i < location; i++) {
            previous = current;
            current = current -> next;
        }
        previous -> next = current -> next;
        if (current == tail) tail = previous;
        free(current);
    }
 
    return tail;
}

// sắp xếp theo tăng dần
NODE * Sort(NODE * tail) {
    if (Length(tail) < 2) return tail;
    NODE * ptr1 = tail -> next, * ptr2, * min;
    int temp;
    // selection sort implementation
    while (ptr1 -> next != tail -> next) {
        min = ptr1;
        ptr2 = ptr1 -> next;
        while (ptr2 != tail -> next) {
            if (min -> data > ptr2 -> data) min = ptr2;
            ptr2 = ptr2 -> next;
        }
        if (min != ptr1) {
            temp = min -> data;
            min -> data = ptr1 -> data;
            ptr1 -> data = temp;
        }

        ptr1 = ptr1 -> next;
    }
    return tail;
}


int main(int argc, char const *argv[])
{
	NODE * cll = NULL;
    int option, data, location;
    while (1) {
        Display(cll);
        printf("\nlength = %d\n", Length(cll));
        printf("\n\nMENU OF CHOICE\n1. Insert at head\n2. Insert at end\n3. Insert at arbitrary location\n4. Delete by value\n5. Delete by location\n6. Sort\n7. Exit\n");
        printf("Your choice: ");
        scanf("%d", &option);
 
        if (option == 1) {
            printf("Enter data to be inserted: ");
            scanf("%d", &data);
            cll = InsertAtHead(cll, data);
        } else if (option == 2) {
            printf("Enter data to be inserted at end: ");
            scanf("%d", &data);
            cll = InsertAtEnd(cll, data);
        } else if (option == 3) {
            printf("Enter data to be inserted: ");
            scanf("%d", &data);
            printf("Enter location to be inserted into: ");
            scanf("%d", &location);
            cll = InsertAtArbitrary(cll, data, location);
        } else if (option == 4) {
            printf("Enter value to be deleted: ");
            scanf("%d", &data);
            cll = DeleteByValue(cll, data);
        } else if (option == 5) {
            printf("Enter location to be deleted: ");
            scanf("%d", &location);
            cll = DeleteByLocation(cll, location);
        } else if(option == 6) {
            Sort(cll);
        } else if (option == 7) {
            break;
        }
    }
    return 0;
}