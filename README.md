# Algorithm
Algorithm source code


## Mask algorithm: 5x5
![image](https://user-images.githubusercontent.com/51250746/159849866-8b19655d-23df-4a9b-b6d5-61a5b9876ca2.png)
- The domain of oneself neighboring is masked(0) and the rests are (1).
- 5x5 mask algorithm 
- Use tensorflow 'roll'(shift), 'expand_dims', 'tile'(add the same one), 'concat' function 
- We would apply it to the Image data 32 x 32.
- When we do 'Self-attention', it helps oneself not to be included.
- It is for 'semantic segmentation'





## Sorting Algorithm

### Bubble sort
자료가 이미 정렬되어 있는 최상의 경우, 자료의 이동이 발생하지 않는다.
![image](https://user-images.githubusercontent.com/51250746/159931447-5325ad23-0d3f-4a77-9ce8-fd9f2288f655.png)

참조: https://gmlwjd9405.github.io/2018/05/06/algorithm-bubble-sort.html


### Insertion sort
자료 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교 하여, 자신의 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘
![image](https://user-images.githubusercontent.com/51250746/159931929-edd47142-4da0-456f-bdc8-43728125bc53.png)
![image](https://user-images.githubusercontent.com/51250746/159932015-24023430-5dbf-443a-8790-02591cdff343.png)

참조: https://gmlwjd9405.github.io/2018/05/06/algorithm-insertion-sort.html



### Heap sort
최대 힙 트리나 최소 힙 트리를 구성해 정렬을 하는 알고리즘
![image](https://user-images.githubusercontent.com/51250746/159932343-5e482c08-afaa-4937-957b-2b1099fac158.png)

참조: https://gmlwjd9405.github.io/2018/05/10/algorithm-heap-sort.html



### Sorting algorithm's Time complexity
![image](https://user-images.githubusercontent.com/51250746/159945976-f20c8f75-a1a7-495d-9795-5a1a7bdba3aa.png)




# Stack & Queue
## Priority queue
들어간 순서에 상관없이 우선순위가 높은 데이터가 먼저 나오는 것
- enqueue: 우선 순위에 맞춰 자리를 찾아감
- dequeue: 우선순위 큐에서의 pop은 곧, 가장 우선순위가 높은 데이터를 빼낸다는 의미


**Applications of priority queue**
- Data compression: Huffman Coding algorithm
- Shortest path algorithms: Dijkstra’s algorithm
- Minimum spanning tree algorithms: Prim’s algorithm
- Even-driven simulations: Customers in a line
- Selection problem: Finding k-th smallest element 
