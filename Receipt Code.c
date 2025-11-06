#include <stdio.h>
 
#define NUM_COURSES 9
 
const char *courses[NUM_COURSES] = {
   "Apéritif", "Soup", "Starter (Entrée)", "Fish Course",
   "Main Dish", "Salad", "Cheese Course", "Dessert", "Digestif"
};
 
const char *meal_options[NUM_COURSES][3] = {
   {"Wine - $5", "Whiskey - $7", "Juice - $3"},
   {"Tomato Soup - $4", "Mushroom Soup - $5", "Chicken Soup - $6"},
   {"Salad - $5", "Pâté - $6", "Spring Rolls - $4"},
   {"Grilled Salmon - $10", "Fish Curry - $9", "Prawns - $12"},
   {"Steak - $15", "Chicken Roast - $12", "Veg Lasagna - $10"},
   {"Greek Salad - $5", "Caesar Salad - $6", "Fruit Salad - $4"},
   {"Cheddar - $6", "Brie - $7", "Blue Cheese - $8"},
   {"Chocolate Cake - $7", "Ice Cream - $5", "Fruit Tart - $6"},
   {"Brandy - $8", "Liqueur - $7", "Herbal Tea - $4"}
};
 
int prices[NUM_COURSES][3] = {
   {5, 7, 3},
   {4, 5, 6},
   {5, 6, 4},
   {10, 9, 12},
   {15, 12, 10},
   {5, 6, 4},
   {6, 7, 8},
   {7, 5, 6},
   {8, 7, 4}
};
int main() {
   int choice;
   int total_price = 0;
 
   printf("Welcome to the South African Themed Restaurant!\n");
   printf("Plan your meal by selecting an option for each course:\n");
 
   for (int i = 0; i < NUM_COURSES; i++) {
       printf("\n%s:\n", courses[i]);
       for (int j = 0; j < 3; j++) {
           printf("%d) %s\n", j + 1, meal_options[i][j]);
       }
 
       printf("Enter your choice (1-3): ");
       scanf("%d", &choice);
 
       if (choice < 1 || choice > 3) {
           printf("Invalid choice. Defaulting to option 1.\n");
           choice = 1;
       }
 
       printf("You chose: %s\n", meal_options[i][choice - 1]);
       total_price += prices[i][choice - 1];
   }
 
   printf("\nYour meal is ready! Total price: $%d\n", total_price);
 
   return 0;
}
