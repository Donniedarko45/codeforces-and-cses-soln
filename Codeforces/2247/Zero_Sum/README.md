# A. Zero Sum

| Metric | Value |
| :--- | :--- |
| **Time Limit** | 1 second |
| **Memory Limit** | 256 megabytes |
| **Input File** | standard input |
| **Output File** | standard output |
| **Difficulty** | 800 |
| **Tags** | constructive algorithms, dp, number theory |

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 200$). The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($1 \le n \le 100$) — the length of array $a$.

The second line of each test case contains $n$ integers $a\_1, a\_2, \ldots, a\_n$ ($a\_i \in \{-1, 1\}$) — the array $a$.

## Output

For each test case, print "YES" if it is possible to make the sum of elements of $a$ equal to $0$, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

## Examples

**Input**
```text
51-121 -121 151 -1 1 -1 16-1 1 -1 -1 -1 -1
```

**Output**
```text
NOYESNONOYES
```

## Note

In the first example, we cannot perform any operations, and the sum of elements of $a$ equals $-1 \neq 0$, so the answer is "NO".

In the second example, the sum of elements of $a$ is already $0$, so the answer is "YES".

In the fifth example, we can perform an operation with $i = 3$, transforming $a$ as follows: $\[-1, 1, \color{red}{-1, -1}, -1, -1\] \rightarrow \[-1, 1, \color{red}{1, 1}, -1, -1\]$. The sum of the resulting array is $0$, so the answer is "YES".

