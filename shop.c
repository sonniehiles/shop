#include <stdio.h>

// look at table for pricing
// look at read input readln
// extra = map to arrays

struct item 
{
   int price;
   char *description;
};

struct item items[] = {
	{ .price = 123, .description = "bread" },
	{ .price = 123, .description = "milk" },
	{ .price = 123, .description = "cheese" }
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
   	printf("Item %d: %s\n", i, items[i].description);
   }
}

int main()
{
	
	display_items();
}