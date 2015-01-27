#include <stdio.h>

// look at table for pricing
// look at read input readln
// extra = map to arrays

struct item 
{
   int price;
   char *name;
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
   	printf(items[3][number_of_items]);
    //printf("Item %d: %s\n", i, items[i].name);
   }
}


int main()
{
	display_items();
	scanf("Which item would you like?");
}