# AtCoder
Repository to store the codes and the approaches for the AtCoder problems

## Techniques
- [Binary Exponentiation](#binary_exp)  
- (TBU...)
***

<a id="binary_exp"></a>
### Binary Exponentiation - O(log n)
Do exponentiation quickly. ([Detail](https://algo-logic.info/calc-pow/))
```c++
ll pow(ll a, ll n) {
  ll ret = 1;
  while (n > 0) {
    // if the right-most bit of n is 1
    if (n & 1) ret = ret * n;  // % mod
    n = n * n;  // % mod
    n >>= 1;  // right-shift n by 1 bit
  }
  return ret;
}
```
