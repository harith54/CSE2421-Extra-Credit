int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}