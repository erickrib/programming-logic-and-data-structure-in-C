#include <stdio.h>
#include <string.h>

#define MAX_FOOD_NAME_LENGTH 20
#define NUM_MAIN_DISHES 5
#define NUM_DESSERTS 5
#define NUM_DRINKS 5

typedef struct
{
  char name[MAX_FOOD_NAME_LENGTH];
  float price;
  int calories;
} Food;

void print_food_options(Food options[], int num_options)
{
  for (int i = 0; i < num_options; i++)
  {
    printf("%d. %s ($%.2f, %d calories)\n", i + 1, options[i].name, options[i].price, options[i].calories);
  }
}

int main()
{
  Food main_dish_options[NUM_MAIN_DISHES] = {
      {"Spaghetti Bolognese", 9.99, 800},
      {"Fried Rice", 8.99, 700},
      {"Steak", 19.99, 1100},
      {"Pork Chops", 14.99, 900},
      {"Chicken Teriyaki", 12.99, 850}};
  Food dessert_options[NUM_DESSERTS] = {
      {"Chocolate Cake", 4.99, 500},
      {"Cheesecake", 5.99, 600},
      {"Ice Cream Sundae", 3.99, 400},
      {"Fruit Salad", 2.99, 200},
      {"Tiramisu", 5.99, 550}};
  Food drink_options[NUM_DRINKS] = {
      {"Soda", 1.99, 150},
      {"Iced Tea", 2.99, 200},
      {"Lemonade", 2.99, 175},
      {"Milkshake", 4.99, 550},
      {"Smoothie", 5.99, 450}};

  int main_dish_choice, dessert_choice, drink_choice;
  float total_price = 0.0;
  int total_calories = 0;

  printf("Here are your main dish options:\n");
  print_food_options(main_dish_options, NUM_MAIN_DISHES);

  printf("\nPlease choose a main dish (1-%d): ", NUM_MAIN_DISHES);
  scanf("%d", &main_dish_choice);
  main_dish_choice--; // adjust for 0-based index

  total_price += main_dish_options[main_dish_choice].price;
  total_calories += main_dish_options[main_dish_choice].calories;

  printf("\nHere are your dessert options:\n");
  print_food_options(dessert_options, NUM_DESSERTS);

  printf("\nPlease choose a dessert (1-%d): ", NUM_DESSERTS);
  scanf("%d", &dessert_choice);
  dessert_choice--; // adjust for 0-based index

  total_price += dessert_options[dessert_choice].price;
  total_calories += dessert_options[dessert_choice].calories;

  printf("\nHere are your drink options:\n");
  for (int i = 0; i < NUM_DRINKS; i++)
  {
    printf("%d. %s - $%.2f\n", i + 1, drink_options[i].name, drink_options[i].price);
  }

  printf("\nPlease choose a drink by entering its number: ");
  scanf("%d", &drink_choice);
  drink_choice--;

  float total_cost = main_dish_options[main_dish_choice].price + dessert_options[dessert_choice].price + drink_options[drink_choice].price;
  total_calories = main_dish_options[main_dish_choice].calories + dessert_options[dessert_choice].calories + drink_options[drink_choice].calories;

  printf("\nYour total cost is: $%.2f\n", total_cost);
  printf("The total calories you will consume is: %d\n", total_calories);

  return 0;
}
