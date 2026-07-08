 <script defer="" src="/lib/katex/katex.min.js"></script><script defer="" src="/lib/katex/contrib/copy-tex.min.js"></script><script defer="" src="/lib/google-code-prettify/run_prettify.js"></script><script>addEventListener("DOMContentLoaded", function (e) { const mathElements = document.getElementsByClassName("math"); const macros = {}; for (let element of mathElements) { katex.render(element.textContent, element, { displayMode: element.classList.contains("math-display"), throwOnError: false, globalGroup: true, macros, }); } }); </script> .katex .base:last-child { display: inline; }

*   **Time limit:** 1.00 s
*   **Memory limit:** 512 MB

Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.

For example, if n=3, there are 4 ways:

*   1+1+1
*   1+2
*   2+1
*   3

# Input

The only input line has an integer n.

# Output

Print the number of ways modulo 10^9+7.

# Constraints

*   1 \\le n \\le 10^6

# Example

Input:

3

Output:

4