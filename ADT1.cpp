#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<conio.h>
struct adt
{
	int capacity;
	int lastIndex;
	int *ptr;	
};
int SearchItem(struct adt *arr,int item);
int sortArray(struct adt *arr);
int removeItem(struct adt *arr,int index);
int totalItems(struct adt* );
int update(struct adt*, int ,int );
int setValue(struct adt*,int ,int );
int getItem(struct adt *arr,int index);
struct adt* createArray(int capacity);
struct adt* createArray(int capacity)
{
	struct adt *arr;
	arr= (struct adt*) malloc(sizeof(struct adt));
	arr->capacity=capacity;
	arr->lastIndex=-1;
	arr->ptr=(int *) malloc(sizeof(int)*arr->capacity);
	return arr;
}
int getItem(struct adt *arr,int index)
{
	if(index>arr->lastIndex||index<0)
	{
		printf("\nIndex not found");	
		return -1;
	}
	else
	return arr->ptr[index];
}
int setValue(struct adt *arr,int index,int value)
{
	if(arr->lastIndex==arr->capacity-1)
	{
		printf("\nArray is full");
		return 0;
	}
	if(index>arr->capacity-1||index<0)
	{
		printf("\ninvalid index");
		return 0;
	}
	if(index==arr->lastIndex+1)
	{
		arr->lastIndex=arr->lastIndex+1;
		arr->lastIndex=value;
		printf("\nInsert successfull");
		return 1;
	}
	if(index>=0||index<=arr->lastIndex)
	{	arr->lastIndex=arr->lastIndex+1;
		int i;
		for(i=arr->lastIndex;i>index;i--)
		arr->ptr[i]=arr->ptr[i-1];
		arr->ptr[index]= value;
		printf("\nInsert successfull");
		return 1;
	}
}
int update (struct adt *arr,int index,int value)
{
	if(index>arr->capacity-1||index<0)
	{
		printf("\nInvalid Index");
		return 0;
	}
	else
	{
		arr->ptr[index]=value;
		printf("\nUpdate successfull");
		return 1;
	}
}
int totalItems(struct adt *arr )
{
	return arr->lastIndex+1;	
}
int removeItem(struct adt *arr,int index)
{
	if(index<0||index>arr->capacity-1)
	{
		printf("\nInvalid Index");
		return 0;
	}
	else
	{
		int i;
		for(i=index;i<arr->lastIndex;i++)
		arr->ptr[i]=arr->ptr[i+1]; 
		arr->lastIndex=arr->lastIndex-1;
		printf("\nRemove successfull");
		return 1;                           
	}
}
int sortArray(struct adt *arr)
{	
	int n=arr->lastIndex+1;
	if(arr->lastIndex==-1)
	{
		printf("\nArray is Empty");
		return 0;
	}
	else
	{
		for(int round=1;round<=n-1;round++)
		  for(int i=1;i<=n-1-round;i++)
		    if(arr->ptr[i]>arr->ptr[i+1])
		      {
		      	int temp;
		      	temp=arr->ptr[i];
		      	arr->ptr[i]=arr->ptr[i+1];
		      	arr->ptr[i+1]=temp;
			  }
	printf("\nSort Successfull");
	return 1;
	}
}
int SearchItem(struct adt *arr,int item)
{
	if(arr->lastIndex==-1)
	{
		printf("\nArray is Empty");
		return 0;
	}
	else
	{
		int l,r,mid;
		l=0;
		r=arr->lastIndex;
		sortArray(arr);
		while(l<=r)
		{
			mid=(l+r)/2;
			if(arr->ptr[mid]==item)
			{
				printf("\nSearch successfull");
				return mid;
			}
			else if(arr->ptr[mid]<item)
			l=mid+1;
			else
			r=mid-1;
		}
		if(arr->ptr[mid]!=item)
		{
			printf("\nSearch unsuccessful");
			return -1;
		}
	}
	
}
int main()
{
	struct adt *arr;
	arr=createArray(5);
	setValue(arr,0,11);
	setValue(arr,1,21);
	setValue(arr,2,31);
	setValue(arr,3,41);
	for(int i=0;i<totalItems(arr);i++)
	printf("\n%d ",arr->ptr[i]);
	return 0;
}



























