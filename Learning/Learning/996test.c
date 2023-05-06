#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[], int n) // 冒泡排序
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void selection_sort(int arr[], int n) // 选择排序
{
	int i, j, min_index;

	for (i = 0; i < n - 1; i++) {
		min_index = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_index])
				min_index = j;
		if (min_index != i) {
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
	}
}




//4．建立含有3个结点的链表,存储从键盘输人的3个整数。要求链表的结点按照整数值由大到小的顺序链接,并在链表建立完成之后,依次输出链表各结点的值

#include <stdio.h>
#include <stdlib.h> // malloc 和 free 函数所在的头文件

struct node_997_9_3_4
{
	int data; // 存储整数值
	struct node_997_9_3_4* next; // 存储指向下一个结点的指针
};

int main_996_9_3_4()
{
	struct node_997_9_3_4* head, * p, * q, * t; // 定义链表的头指针和其他结点指针
	int i, n, a, num;

	// 创建头结点
	head = NULL;

	printf("输入需要链表存储的整数个数：");
	scanf("%d", &num);
	printf("\n请依次输入%d个整数\n", num);

	for (i = 1; i <= num; i++)
	{
		scanf("%d", &a);


		p = (struct node_997_9_3_4*)malloc(sizeof(struct node_997_9_3_4)); // 创建新结点并赋值
		p->data = a;
		p->next = NULL;

		if (head == NULL || a > head->data) // 将新结点插入到链表中
		{
			p->next = head;
			head = p;
		}
		else
		{
			q = head;
			while (q->next != NULL && q->next->data >= a)
				q = q->next;
			p->next = q->next;
			q->next = p;
		}
	}

	printf("\n链表的值为：\n-->"); // 输出链表的每个结点的值
	t = head;
	while (t != NULL)
	{
		printf("%d-->", t->data);
		t = t->next;
	}
	printf("\n");

	while (head != NULL) // 释放链表的内存空间
	{
		p = head;
		head = head->next;
		free(p); // free完成之后置空，防止产生悬空指针
		p = NULL;
	}

	return 0;
}


/*
_997_9_3_4(链表)实现过程：
①该程序实现了建立含有3个结点的链表，存储从键盘输入的3个整数，并按照整数值由大到小的顺序链接链表结点，并输出链表各结点的值的功能。
②程序首先定义了链表结点的结构体类型，包括整数值和指向下一个结点的指针。然后定义了3个指向结点的指针变量，并分别动态分配了3个结点的内存空间，同时将它们的值分别存储为从键盘输入的3个整数。
③接下来，程序比较了这3个整数的大小，并按照由大到小的顺序链接了链表结点。具体实现方式是，先比较第一个和第二个整数的大小，如果第一个大于第二个，则将第一个结点设为头结点，
将第二个结点设为第一个结点的下一个结点，否则反过来。然后再比较头结点和第三个整数的大小，如果第三个整数大于头结点，则将第三个结点设为头结点，将原头结点设为第三个结点的下一个结点，
否则将第三个结点链接到第一个或第二个结点的后面。
④最后，程序依次输出链表各结点的值，具体实现方式是，定义一个指向头结点的指针，然后通过遍历整个链表，输出每个结点的值。需要注意的是，在遍历链表的过程中，要注意不要让指针指向空指针，
否则会导致程序出现错误。为此，程序使用了一个while循环，判断链表头指针是否为NULL，如果不是，则将头指针指向的结点输出并释放其内存空间。同时，为了避免指针悬空，程序在释放结点的内存空间之后，
将指向该结点的指针设置为NULL。
*/


#include <stdio.h>
#include <stdlib.h>

// 定义链表结构体
typedef struct node {
	int data;               // 存储整数值
	struct node* next;      // 存储指向下一个结点的指针
} Node;

// 插入一个结点到链表中，按从大到小的顺序
void insert(Node** head, int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));  // 创建一个新结点并分配内存
	newNode->data = value;                        // 将新结点的值赋为传入的值
	newNode->next = NULL;                         // 将新结点的下一个结点指针设为 NULL

	// 若链表为空，将新结点设置为链表头
	if (*head == NULL) {
		*head = newNode;
		return;
	}

	// 若传入的值比链表头的值小，将新结点设置为链表头
	if ((*head)->data < value) {
		newNode->next = *head;
		*head = newNode;
		return;
	}

	// 遍历链表，找到新结点插入的位置，使链表仍然保持有序
	Node* temp = *head;
	while (temp->next != NULL && temp->next->data >= value) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

// 输出链表中所有结点的值
void printList(Node* head) {
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main_996_3() {
	Node* head = NULL;                      // 定义链表头
	int i, x;

	printf("请输入三个整数：\n");
	for (i = 0; i < 3; i++) {               // 循环读取三个整数，将其插入链表
		scanf("%d", &x);
		insert(&head, x);
	}

	printf("排序后的链表为：");
	printList(head);                        // 输出排序后的链表结点值

	return 0;
}








#include <stdio.h>

// 求最大公约数
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// 求最小公倍数

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}





//分解质因数

void primeFactorization(int num)
{
	int factor = 2;
	printf("%d=", num);
	while (num != 1)
	{
		if (num % factor == 0)
		{
			printf("%d", factor);
			num /= factor;
			if (num != 1)
				printf("*");
		}
		else
			factor++;
	}
}

// 1000以内的完数有

void Finished_Counting()
{
	int i = 0, j = 0, sum = 0;
	printf("1000以内的完数有：\n");
	for (i = 1; i <= 1000; i++) {
		sum = 0;
		for (j = 1; j <= i / 2; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			printf("%d = 1", i);
			for (j = 2; j <= i / 2; j++) {
				if (i % j == 0) {
					printf(" + %d", j);
				}
			}
			printf("\n");
		}

	}
}




