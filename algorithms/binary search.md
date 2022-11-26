# Binary Search
Search algorithm that finds position of a specified search key within a sorted array.

### C++
```cpp
int binary_search(const int sorted_list[], int search_key, int max_element, int min_element) {
  int middle;
  
  while (min_element <= max_element>) {
      middle = (min_element + max_element)/2;
      
      if (search_key > sorted_list[middle]) {
          min_element = middle + 1;

      } else if (search_key < sorted_list[middle]) {
          max_element = middle - 1;

      } else (
        return middle;

      )
  }
}
```
