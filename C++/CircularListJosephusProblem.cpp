// This problem states a circle with number of nodes assigned
// then we start to count node-1 steps to erase one of the nodes
// the last node that left will be printed to the screen
#include <iostream.h>
#include <stdlib.h>

struct node
{
	int item;
	node* next;
	node(int x , node* t)
	{
		item = x;
		next = t;
	}
	typedef node *link;

	int main(int argc,char argv[])
	{
		int i, N =atoi(argv[1]) , M= atoi(argv[2]);
		link t = new node(1,0);
		t -> next = t;
		while(x!=x->next)
		{
			for (i=1;i<M;i++)
				x=x->next;
			x->next= x->next->next;
		} 
		cout << x -> item << endl;
	}
}
