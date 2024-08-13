// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    // Initialize max_value to 1st element of array
    int max_value = array[0];
    // Loop through array
    for (int i = 0; i < n; i++)
    {
        // If current array element is greater than max_value
        if (array[i] > max_value)
        {
            // Update max_value
            max_value = array[i];
        }
    }
    return max_value;
}
