/**********************************
本题在po主vs2015上会因node m[100000]报错
显示为栈溢出，个人认为应该是页面大小不够，
但整体思路没有太大问题
***********************************/
#include <stdio.h>

struct node {
	int address;
	int data;
	int next;
};

int main(void)
{
	node m[100000];
	node *list;
	int n, k, start;
	scanf("%d %d %d", &start, &n, &k);
	for (int i = 0; i < n; i++) {
		int addr, data, next;
		scanf("%d %d %d", &addr, &data, &next);
		m[addr].address = addr;
		m[addr].data = data;
		m[addr].next = next;
	}
	list = (node *)malloc(sizeof(node)*n);
	for (int i = 0; i < n; i++) {
		list[i] = m[start];
		start = m[start].next;
	}
	int c = 0;
	int x = n;
	while (x /= k) {
		for (int i = c*k; i < (2*c+1)*k / 2; i++) {
			node temp = list[i];
			list[i] = list[(2*c+1)*k - i - 1];
			list[(2*c+1)*k - i - 1] = temp;
		}
		c++;
	}
	for (int i = 0; i < n - 1; i++) {
		printf("%05d %d %05d\n", list[i].address, list[i].data, list[i + 1].address);
	}
	printf("%05d %d -1\n", list[n - 1].address, list[n - 1].data);

	return 0;
}
