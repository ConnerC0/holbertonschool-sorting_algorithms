#0x1A: C - Big O and Sorting Algorithms
A Holberton School project in Course PP1300.

## About the Project
This project is mean to teach us specifically about 4 different sorting algorithms. What Big O notation is, and how to evaluate the time complexity of an algorithm. How to select the best sorting algorithm for a given input and what is a stable sorting algorithm. The four sorting algorithms we will cover are bubble sort, insertion sort, selection sort and quick sort.

## Bubble Sort
The bubble sort algorithm sorts by iterating through the list linearly. If the next number is less than the previous number then they swap. It will continue looping through the array until it is sorted.

The Big O notation for best case, average case, and worst case are as follows:
* O(n)
* O(n<sup>2</sup>)
* O(n<sup>2</sup>)

## Insertion Sort
The insertion sort algorithm sorts by iterating through the list one at a time. Each time it iterates through the array, it will check the previous node's value. If the value is greater than the current node it will swap. If a swap occurs then it will check the previous node again and do so until the value less than or the value is NULL. The sort ends when it makes it to the end of the list and the previous nodes value is less than the current node.

The Big O notation for best case, average case, and worst case are as follows:
* O(n)
* O(n<sup>2</sup>)
* O(n<sup>2</sup>)

## Selection Sort
The selection sort algorithm sorts by iterating through the list. With the first two nodes they compare. If the node to the right is less than the node to the left then they will swap. The less than node will then continue to compare itself with all the remaining nodes in the list one by one. If it finds one less then itself it will swap and the new current node will pick up from where the previous node left off and continue comparing. If it can't find a node less then it, it stays in its new position and then the next node will start comparing and this process will continue until the list is sorted.

The Big O notation for best case, average case, and worst case are as follows:

* O(n<sup>2</sup>)
* O(n<sup>2</sup>)
* O(n<sup>2</sup>)

