# HPC-Tutorials
1. Which sorting algorithm performed better? Explain your observation.
Ans: Quick Sort Algorithm performed better than bubble sort algorithm. Quick sort takes O(n*logn) time complexity whereas bubble sort takes O(n*n) time complexity which is also evident by their execution times Quick sort-0.0024s  and Bubble sort-0.4686s.
2. Which function consumed the maximum execution time?
Ans: The bubble sort function where the actual swapping takes place takes the maximum execution time.
3. How does execution time change with increasing input size?
Ans: The execution time increases in both the sorting algorithms which is also evident from their asymptotic time complexities.
4. How did compiler optimizations (-O2 and -O3) improve performance?
Ans: While the execution time for quick sort remained almost the same in both O2 and O3 optimization (0.004s to be precise), the bubble sort showed an increase in the time of execution in O2 Optimization (0.951s (0.8675 in O0)) and O3 optimization(1.043s).
5. Which algorithm would you recommend for large datasets? Justify your answer.
Ans: For larger datasets , Quick sort suits the best given its ability to take the least execution time out of the 2 sorting algorithms.
