#include <stdio.h> 
void bubbleSort(int weight[], int profit[], double ratio[], int n) { 
    int i, j; 
    for (i = 0; i < n - 1; i++) { 
        for (j = 0; j < n - i - 1; j++) { 
            if (ratio[j] < ratio[j + 1]) { 
                double tempRatio = ratio[j]; 
                ratio[j] = ratio[j + 1]; 
                ratio[j + 1] = tempRatio; 
                int tempWeight = weight[j]; 
                weight[j] = weight[j + 1]; 
                weight[j + 1] = tempWeight; 
 
                int tempProfit = profit[j]; 
                profit[j] = profit[j + 1]; 
                profit[j + 1] = tempProfit; 
            } 
        } 
    } 
    

} 
void fractionalKnapsack(int capacity, int weight[], int profit[], double ratio[], int n) { 
    bubbleSort(weight, profit, ratio, n); 
 
    double totalProfit = 0.0; 
    double vector[100] = {0}; 
    int i; 
    for (i = 0; i < n; i++) { 
        if (capacity >= weight[i]) { 
            vector[i] = 1.0; 
            totalProfit += profit[i]; 
            capacity -= weight[i]; 
        } else if (capacity > 0) { 
            vector[i] = (double)capacity / weight[i]; 
            totalProfit += profit[i] * vector[i]; 
            capacity = 0; 
} else { 
vector[i] = 0.0; 
} 
} 
printf("Item fractions taken: "); 
for (i = 0; i < n; i++) { 
printf("%.2f ", vector[i]); 
} 
printf("\nMaximum profit in Knapsack = %.2f\n", totalProfit); 
} 
int main() { 
int n, capacity; 
printf("Number of items: "); 
scanf("%d", &n); 
int weight[100], profit[100]; 
double ratio[100]; 
printf("Enter weight and profit of each item:\n"); 
int i; 
for (i = 0; i < n; i++) { 
scanf("%d %d", &weight[i], &profit[i]); 
ratio[i] = (double)profit[i] / weight[i]; 
} 
printf("Enter knapsack capacity: "); 
scanf("%d", &capacity); 
fractionalKnapsack(capacity, weight, profit, ratio, n); 
return 0; 
}
