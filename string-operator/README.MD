### Problem Statement :
Om has a string S of length N. But Om being perfectionist, doesn't likes the string. He decides to do perform M operations on the string to see if final string generated is perfect or not.

For ith operation on string, Om selects a number Ai and reverses substring covered by Ai to N - Ai + 1 position. Om then proceeds to apply (i+1)th operation on string obtained after applying ith operation. It is guaranteed that 2 * Ai ≤ N. Strings consist of latin letters in lower case and are numbered from left to right starting from position-1.

You need to report to Om the final string that he is going to obtain.


### Input : 
The first line will contain the string S
Second line contains integer M, which number of operations Om plans to apply to string
Third line contains M space separated integers Ai which represents position in string where Om is going to transform string in ith operation.
### Output
Output a single string, final string obtained after applying all operatons one after one

### Example
### Input
abcdef<br>
1<br>
2
## Output
aedcbf
