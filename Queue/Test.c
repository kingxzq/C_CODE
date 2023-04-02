#include"Queue.h"


void TestQueue1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	printf("%d\n", QueueBack(&q));
	printf("%d\n", QueueSize(&q));

	while (!QueueEmpty(&q))
	{
		QDateType front = QueueFront(&q);
		printf("%d ", front);
		QueuePop(&q);
	}
	printf("\n");

	QueueDestroy(&q);

}
int main()
{
	TestQueue1();
	return 0;
}