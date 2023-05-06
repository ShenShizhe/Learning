#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[], int n) // ð������
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


void selection_sort(int arr[], int n) // ѡ������
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




//4����������3����������,�洢�Ӽ������˵�3��������Ҫ������Ľ�㰴������ֵ�ɴ�С��˳������,�������������֮��,����������������ֵ

#include <stdio.h>
#include <stdlib.h> // malloc �� free �������ڵ�ͷ�ļ�

struct node_997_9_3_4
{
	int data; // �洢����ֵ
	struct node_997_9_3_4* next; // �洢ָ����һ������ָ��
};

int main_996_9_3_4()
{
	struct node_997_9_3_4* head, * p, * q, * t; // ���������ͷָ����������ָ��
	int i, n, a, num;

	// ����ͷ���
	head = NULL;

	printf("������Ҫ����洢������������");
	scanf("%d", &num);
	printf("\n����������%d������\n", num);

	for (i = 1; i <= num; i++)
	{
		scanf("%d", &a);


		p = (struct node_997_9_3_4*)malloc(sizeof(struct node_997_9_3_4)); // �����½�㲢��ֵ
		p->data = a;
		p->next = NULL;

		if (head == NULL || a > head->data) // ���½����뵽������
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

	printf("\n�����ֵΪ��\n-->"); // ��������ÿ������ֵ
	t = head;
	while (t != NULL)
	{
		printf("%d-->", t->data);
		t = t->next;
	}
	printf("\n");

	while (head != NULL) // �ͷ�������ڴ�ռ�
	{
		p = head;
		head = head->next;
		free(p); // free���֮���ÿգ���ֹ��������ָ��
		p = NULL;
	}

	return 0;
}


/*
_997_9_3_4(����)ʵ�ֹ��̣�
�ٸó���ʵ���˽�������3�����������洢�Ӽ��������3������������������ֵ�ɴ�С��˳�����������㣬��������������ֵ�Ĺ��ܡ�
�ڳ������ȶ�����������Ľṹ�����ͣ���������ֵ��ָ����һ������ָ�롣Ȼ������3��ָ�����ָ����������ֱ�̬������3�������ڴ�ռ䣬ͬʱ�����ǵ�ֵ�ֱ�洢Ϊ�Ӽ��������3��������
�۽�����������Ƚ�����3�������Ĵ�С���������ɴ�С��˳�������������㡣����ʵ�ַ�ʽ�ǣ��ȱȽϵ�һ���͵ڶ��������Ĵ�С�������һ�����ڵڶ������򽫵�һ�������Ϊͷ��㣬
���ڶ��������Ϊ��һ��������һ����㣬���򷴹�����Ȼ���ٱȽ�ͷ���͵����������Ĵ�С�������������������ͷ��㣬�򽫵����������Ϊͷ��㣬��ԭͷ�����Ϊ������������һ����㣬
���򽫵�����������ӵ���һ����ڶ������ĺ��档
����󣬳�������������������ֵ������ʵ�ַ�ʽ�ǣ�����һ��ָ��ͷ����ָ�룬Ȼ��ͨ�����������������ÿ������ֵ����Ҫע����ǣ��ڱ�������Ĺ����У�Ҫע�ⲻҪ��ָ��ָ���ָ�룬
����ᵼ�³�����ִ���Ϊ�ˣ�����ʹ����һ��whileѭ�����ж�����ͷָ���Ƿ�ΪNULL��������ǣ���ͷָ��ָ��Ľ��������ͷ����ڴ�ռ䡣ͬʱ��Ϊ�˱���ָ�����գ��������ͷŽ����ڴ�ռ�֮��
��ָ��ý���ָ������ΪNULL��
*/


#include <stdio.h>
#include <stdlib.h>

// ��������ṹ��
typedef struct node {
	int data;               // �洢����ֵ
	struct node* next;      // �洢ָ����һ������ָ��
} Node;

// ����һ����㵽�����У����Ӵ�С��˳��
void insert(Node** head, int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));  // ����һ���½�㲢�����ڴ�
	newNode->data = value;                        // ���½���ֵ��Ϊ�����ֵ
	newNode->next = NULL;                         // ���½�����һ�����ָ����Ϊ NULL

	// ������Ϊ�գ����½������Ϊ����ͷ
	if (*head == NULL) {
		*head = newNode;
		return;
	}

	// �������ֵ������ͷ��ֵС�����½������Ϊ����ͷ
	if ((*head)->data < value) {
		newNode->next = *head;
		*head = newNode;
		return;
	}

	// ���������ҵ��½������λ�ã�ʹ������Ȼ��������
	Node* temp = *head;
	while (temp->next != NULL && temp->next->data >= value) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

// ������������н���ֵ
void printList(Node* head) {
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int main_996_3() {
	Node* head = NULL;                      // ��������ͷ
	int i, x;

	printf("����������������\n");
	for (i = 0; i < 3; i++) {               // ѭ����ȡ���������������������
		scanf("%d", &x);
		insert(&head, x);
	}

	printf("����������Ϊ��");
	printList(head);                        // ���������������ֵ

	return 0;
}








#include <stdio.h>

// �����Լ��
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// ����С������

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}





//�ֽ�������

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

// 1000���ڵ�������

void Finished_Counting()
{
	int i = 0, j = 0, sum = 0;
	printf("1000���ڵ������У�\n");
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




