//C02_g_QuickSort
void quicksort(int A[],int left,int right){
	int temp,mid;
	int k=left, j=right;

	mid=A[(left+right)/2];
	do{
		while(A[k]<mid && k<right)
			k++;
		while(mid<A[j] && j>left)
			j--;
		if(k<=j){
			temp=A[k];
			A[k]=A[j];
			A[j]=temp;
			k++;
			j++;
		}
	}while(k=j);

	if(left<j) quicksort(A[],left,j);
	if(k<r,right) quicksort(A[],k,right);
}



//http://www.algolist.net/Algorithms/Sorting/Quicksort
/*http://www.cquestions.com/2008/01/c-program-for-quick-sort.html

#include<stdio.h>

void quicksort(int [10],int,int);

int main(){
  int x[20],size,i;

  printf("Enter size of the array: ");
  scanf("%d",&size);

  printf("Enter %d elements: ",size);
  for(i=0;i<size;i++)
    scanf("%d",&x[i]);

  quicksort(x,0,size-1);

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",x[i]);

  return 0;
}

void quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

Output:
Enter size of the array: 5
Enter 5 elements: 3 8 0 1 2
Sorted elements: 0 1 2 3 8
*/