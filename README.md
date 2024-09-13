# Sorting Methods in C

This repository contains two C programs that demonstrate different sorting methods and concepts. The first program finds the maximum value in an array, and the second program sorts an array of structures representing cities and their average temperatures.

## Table of Contents
- [Finding the Maximum Value](#finding-the-maximum-value)
- [Sorting Cities by Temperature](#sorting-cities-by-temperature)
- [Future Integration](#future-integration)

## Finding the Maximum Value

This program prompts the user to enter a number of elements and their values, then finds and prints the maximum value in the array.

### Code Explanation
- **Input Handling**: The program uses a `do-while` loop to ensure the user enters a positive number of elements.
- **Array Initialization**: An array of integers is created to store the elements.
- **Finding the Maximum Value**: The `max` function iterates through the array to find the maximum value.

### Example Usage
```c
Number of elements: 5
Element 0: 10
Element 1: 20
Element 2: 5
Element 3: 30
Element 4: 25
The max value is 30.
```

![image](https://github.com/user-attachments/assets/bde78bb4-e3f7-4beb-b1ff-1695d5e85a4f)


## Sorting Cities by Temperature

This program defines a structure to store city names and their average temperatures, then sorts the cities in descending order based on temperature using the Bubble Sort algorithm.

### Code Explanation
- **Structure Definition**: A structure `avg_temp` is defined to store city names and temperatures.
- **Array Initialization**: An array of `avg_temp` structures is created and initialized with city names and temperatures.
- **Sorting**: The `sort_cities` function uses the Bubble Sort algorithm to sort the cities by temperature in descending order.

### Example Output
```
Average July Temperatures by City

Phoenix: 107
Las Vegas: 105
Austin: 97
Miami: 97
Denver: 90
Chicago: 85
New York: 85
Boston: 82
Los Angeles: 82
San Francisco: 66
```

![image](https://github.com/user-attachments/assets/97d2003c-6804-42ab-b83a-2c7f7a61a3f1)

## Future Integration

In the future, these concepts will be integrated into a larger project that involves:
- **Dynamic Data Handling**: Allowing users to input data dynamically and store it in a database.
- **Advanced Sorting Algorithms**: Implementing more efficient sorting algorithms like Quick Sort and Merge Sort.
- **User Interface**: Creating a user-friendly interface to interact with the data and visualize the sorting process.
