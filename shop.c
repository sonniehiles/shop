#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define false 0
#define true !false

struct item 
{
   int price;
   char *name; //the start means its address in memory.
   char *description;
};


struct item items[] = {
	{ .price = 132, .name = "Lazer", .description = "A light shooting devise"},
	{ .price = 184, .name= "Shark", .description = "A dentists nightmare"},
	{ .price = 121, .name = "Carrot", .description = "Lets you see in the dark" },
	{ .price = 405, .name = "Tree", .description = "A tall oxygen maker"}
	};


int number_of_items() 
{
	return sizeof(items) / sizeof(struct item);
}


void display_items() 
{
	int num_items = number_of_items();

   for (int i = 0; i < num_items; i = i + 1)
   {
   		printf("Item %d: %-15s %s %-15d\n", i +1, items[i].name, items[i].description, items[i].price);
   }
}


int main()
{
	int still_shopping;

	still_shopping = true;

	while (still_shopping)
	{
		char input[20];
	
		display_items();
	
		printf("\nEnter Item: \n");
		scanf("%s", input);

		if (strcmp(input, "q") == 0)
		{
			still_shopping = false;
		}
		else 
		{
			int item;
			item = atoi(input) - 1; //1 index to 0 index

			if (item < 0 || item >= number_of_items())
			{
				printf("That was invalid? \n");
			} 
			else
			{
				printf("you baught a: %s \n", items[item].name);
			}
		}
	}
}