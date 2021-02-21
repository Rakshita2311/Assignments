#include<stdio.h>
#include<stdlib.h>
int *books;
int **pages;
int main()
{
	int shelves,queries,i;
	printf("s");
	scanf("%d",&shelves);
	printf("q");
	scanf("%d",&queries);
	while(queries>0)
	{
		int type;
		scanf("%d",&type);
		
		if(type==1)
		{
			int x,y;
			scanf("%d%d",&x,&y);
		}
		else if(type==2)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			printf("%d\n",*(*(pages+x)+y));
		}
		else
		{
			int x;
			scanf("%d",&x);
			printf("%d\n",*(books+x));
		}
		queries--;
	}
	if(books)
	{
		free(books);
	}
	for(i=0;i<shelves;i++)
	{
		if(*(pages+i))
		{
			free(*(pages+i));
		}
	}
	if(pages)
	{
		free(pages);
	}
}
