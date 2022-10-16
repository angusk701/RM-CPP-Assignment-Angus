# HW3 Godel, Escher, Bach

Topics: recursion, scope, overloading

---

Write a function to calculate the value of [Ackermann function](https://en.wikipedia.org/wiki/Ackermann_function). If only one integer $m$ is given, calculate $ack(m, 0)$.

$$
\begin{align}
ack(0, n) = n + 1 \\  
ack(m+1, 0) = ack(m, 1) \\
ack(m+1, n+1) = ack(m, ack(m+1, n))
\end{align}
$$

```cpp
/**
 * @param m: integer 
 * @param n: integer
 * @return: integer of output of Ackermann function
 */
int ack(int m, int n);

/**
 * @param m: integer 
 * @return: integer of output of Ackermann function
 */
int ack(int m);
```

Input

```cpp
ack(2, 1);
ack(4);
```

Output

```cpp
5
13
```
