//this sort divides and conquers the sort.
#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[],int st,int end)
{
   int pivot=a[end];
   int i=st-1;   //no partition initially.
  for(int j=st;j<end;j++)
  {
    if(a[j]<=pivot)
    {             //if i found an element for the left side of the pivot i will                  //increement the parttion for the next elemen in the left side array
                  //hence i will increement i increase sixze of left partition and insert the eleement to it
      i++;
      swap(&a[i],&a[j]);
    }
  }
  swap(&a[i+1],&a[end]);
  return (i+1);
}
void quick_sort(int a[],int st,int end)
{
  if(st<end)
  {
   int pi=partition(a,st,end); //partiotion the array.
    quick_sort(a,st,pi-1); //sort the left side of the array
    quick_sort(a,pi+1,end);//sort the right sid eiof the array
  }
}

int main()
{
  int a[]={1,4,2,6,3};
  int st=0,end=4;
  quick_sort(a,st,end);
  cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<endl;
  return 0;
}
