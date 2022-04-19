#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,a[5],mid,n_find,max,min;
	FILE *fptr;
	fptr = fopen("/home/xs/Desktop1.txt","w");
	if(fptr == NULL)
	{
		printf("error!");
		exit(1);
	}
	printf("enter the elements into the array");
	for(i = 0;i<5;i++)
	{
		scanf("%d",&a[i]);
		}
	printf("enter element to be find");
	scanf("%d",&n_find);
	min=0;
	max=4;
	mid =(min+max)/2;
	for(i=0;i<5;i++)
	{
		if(a[mid]==n_find)
		{
			printf("we found the element in  %dth position",mid+1);
			break;
		}
		if(a[mid]<n_find)
		{
			min = mid+1;
			mid= (min+max)/2;
		}
		else
		{
			max = mid-1;
			mid = (min+max)/2;
		}
	}
	fprintf(fptr,"element to be found is %d",n_find);
         fclose(fptr);
	 return 0;
}
