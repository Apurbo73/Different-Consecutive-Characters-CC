### Different Consecutive Characters-CC

The program reads multiple test cases. For each test case, it takes a binary string of length N as input. The goal is to count how many insertions are needed so that no two consecutive characters are the same (i.e., the string alternates between 0 and 1). The logic is to go through the string from the second character to the last, and whenever the current character is the same as the one before it, that means an extra character needs to be inserted in between to make them different — so we increase the counter operations.

At the end of the loop for each test case, the program prints the number of insertions required. For example, in the string "00100", the first two characters are "00" (same), so 1 operation is needed. Later in the string, there's another "00" (same), so we need another insertion, totaling 2 operations. This simple logic ensures we only count adjacent duplicates and compute the exact number of insertions needed.
