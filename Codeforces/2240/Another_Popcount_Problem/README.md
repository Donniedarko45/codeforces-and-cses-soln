# A. Another Popcount Problem

| Metric | Value |
| :--- | :--- |
| **Time Limit** | 1 second |
| **Memory Limit** | 256 megabytes |
| **Input File** | standard input |
| **Output File** | standard output |
| **Difficulty** | 800 |
| **Tags** | greedy |

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 10^3$). The description of the test cases follows.

Each of the next $t$ lines contains two integers $n$ and $k$ ($1 \le n, k \le 10^6$) — the maximum allowed sum of the sequence and the length of the sequence, respectively.

## Output

For each test case, output a single integer — the maximum possible value of $\sum\_{i=1}^{k} \operatorname{popcount}(a\_i)$.

## Examples

**Input**
```text
62 13 16 214142 1372051000000 1001000000 1000000
```

**Output**
```text
1241414213221000000
```

## Note

In the first test case, $n=2$ and $k=1$. We can choose $a = \[1\]$ or $a = \[2\]$. In both cases, the sum of popcounts is $1$.

In the second test case, $n=3$ and $k=1$. We can choose $a = \[3\]$, since $(3)\_2 = (11)\_2$, $\operatorname{popcount}(3) = 2$.

In the third test case, $n=6$ and $k=2$. We can choose $a = \[3, 3\]$. The sum is $3 + 3 = 6 \le 6$, and the total popcount is $\operatorname{popcount}(3) + \operatorname{popcount}(3) = 2 + 2 = 4$.

