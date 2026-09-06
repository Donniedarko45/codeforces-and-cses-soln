# D. Two Digit Strings

| Metric | Value |
| :--- | :--- |
| **Time Limit** | 3 seconds |
| **Memory Limit** | 512 megabytes |
| **Input File** | standard input |
| **Output File** | standard output |
| **Difficulty** | 1600 |
| **Tags** | dp, strings |

## Input

The first line contains a single integer $t$ ($1 \le t \le 2 \cdot 10^3$) — the number of test cases.

The first line of each test case contains a string $a$ ($1 \le |a| \le 5 \cdot 10^3$), consisting only of digits.

The second line of each test case contains a string $b$ ($1 \le |b| \le 5 \cdot 10^3$), consisting only of digits.

Additional constraint on the input: $\sum (|a| + |b|) $ across all test cases does not exceed $10^4$.

## Output

For each test case, print one integer — the maximum possible length of the resulting equal strings. If you can't make the strings equal, print \-1.

## Examples

**Input**
```text
351474444121945602123450012345
```

**Output**
```text
2-15
```

## Note

In the first example from the statement, the maximum length you can obtain is 2:

*   $\mathbf{51}47 \rightarrow 6\mathbf{47} \rightarrow 61$;
*   $\mathbf{44}441 \rightarrow \mathbf{84}41 \rightarrow \mathbf{24}1 \rightarrow 61$.

In the second example from the statement, you can't make strings $a$ and $b$ equal, so the answer is \-1.

In the third example from the statement, the maximum length you can obtain is 5:

*   $1234\mathbf{50} \rightarrow 12345$;
*   $\mathbf{01}2345 \rightarrow 12345$.

