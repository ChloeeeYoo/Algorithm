# Algorithm
Algorithm source code


## Attention mask 5x5
![image](https://user-images.githubusercontent.com/51250746/159849866-8b19655d-23df-4a9b-b6d5-61a5b9876ca2.png)
- The domain of oneself neighboring is masked(0) and the rests are (1).
- 5x5 mask algorithm
- Use tensorflow 'roll'(shift), 'expand_dims', 'tile'(add the same one), 'concat' function 
- We would apply it to the Image data 32 x 32.
- When we do 'Self-attention', it helps oneself not to be included.
