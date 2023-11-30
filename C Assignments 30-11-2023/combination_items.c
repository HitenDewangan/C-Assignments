#include <stdio.h>

typedef struct Item {
  char* name;
  int weight;
  int profit;
} Item;

Item items[] = {
  {"Item1", 3, 12},
  {"Item2", 4, 16},
  {"Item3", 5, 20}
};

int max_profit = 0;
Item* best_combination[3];

void find_max_profit(int item_index, int total_weight, int total_profit, Item* combination[]) {
  if (item_index == 3 || total_weight > 20) {
    return;
  }

  Item* current_item = &items[item_index];

  // Check if including the current item once is valid
  if (total_weight + current_item->weight <= 20) {
    combination[item_index] = current_item;
    int new_total_weight = total_weight + current_item->weight;
    int new_total_profit = total_profit + current_item->profit;

    if (new_total_profit > max_profit) {
      max_profit = new_total_profit;
      for (int i = 0; i < 3; i++) {
        best_combination[i] = combination[i];
      }
    }

    find_max_profit(item_index + 1, new_total_weight, new_total_profit, combination);
  }

  // Check if including the current item twice is valid
  if (total_weight + 2 * current_item->weight <= 20) {
    combination[item_index] = current_item;
    combination[item_index + 1] = current_item;
    int new_total_weight = total_weight + 2 * current_item->weight;
    int new_total_profit = total_profit + 2 * current_item->profit;

    if (new_total_profit > max_profit) {
      max_profit = new_total_profit;
      for (int i = 0; i < 3; i++) {
        best_combination[i] = combination[i];
      }
    }

    find_max_profit(item_index + 2, new_total_weight, new_total_profit, combination);
  }

  // Skip the current item
  find_max_profit(item_index + 1, total_weight, total_profit, combination);
}

int main() {
  Item combination[3];
  find_max_profit(0, 0, 0, combination);

  printf("Maximum Profit: %d\n", max_profit);
  printf("Best Combination: ");
  for (int i = 0; i < 3; i++) {
    printf("%s ", best_combination[i]->name);
  }
  printf("\n");

  return 0;
}
