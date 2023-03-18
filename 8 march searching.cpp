#include<iostream>
using namespace std;
int findtarget(int arr[],int size,int target)
{
int start=0;
int end=size-1;
int mid=(start+end) / 2;
while(start<=end)
{
if(arr[mid]==target)
	{ return mid;
}
else  {
if(arr[mid]<target)
     { start=mid+1;
	 }
	 else end=mid-1;
	 mid=(start+end)/2;}
}
	 return -1;
	
}

int main()
{ int arr[]={1,2,3,4,4,6,7,8,9,12};
int size=10;
int target=7;
int indexoftarget=findtarget(arr,size,target);
if(indexoftarget== -1)
 { cout<<"target is not found ";
 }
 else cout<<"target is found at "<<indexoftarget<<endl;
 return 0;

	
}
