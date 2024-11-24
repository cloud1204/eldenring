# Elden Ring

IONC 2023 Practice Problem (Original)

## Problem Statement

艾爾登法環是一個刻了$n$個數字的圓環。依照順時針順序，上面的數字依序為 $a_1,a_2,a_3,...,a_n$。已知基於神奇的魔法，如果法環破裂了，其每一個碎片上的數字和都必定是$k$的倍數。舉例來說，假如法環上的數字依序為 $1, 2, 3, 4, 5, 6$且 $k=3$，那它就有可能碎裂成 $[2,3,4], [5,6,1]$ 兩段碎片（當然，這只是其中一個可能性）。然而，如果法環上的數字是 $1,2,3,4$，那它就不可能破裂。

在破碎戰爭的前夕，法環上的其中一個數字被一位居心叵測的褪色者竄改成一個任意的數字了。在只知道法環上原本的數字的情況下，請計算法環至多會碎裂成幾塊碎片? 對於無論如何都不可能破裂的情況，請輸出$1$。


## Input Format

* line $1$: $\ \ n,k$
* line $2$: $\ \ a_1,a_2,a_3,...,a_n$


## Output Format

* line $1$: $\ \ ans$

## Constraints

- $1 \le n,k \le 3\times 10^5$。
- $1 \le a_i \le 10^9$。

## 子任務

1. (100 points) 無額外限制。

## 範例

### 範例輸入 1

```
8 7
1 1 1 6 4 5 2 5
```


### 範例輸出 1

```
4
```

假如把法環的第五個數字從 $4$ 改成 $7$，那它就可能碎裂成 $[1,6], [7], [5,2], [5,1,1]$四段碎片，因此答案為 $4$。

### 範例輸入 2

```
3 8
4 5 7
```


### 範例輸出 2

```
1
```

無論怎麼竄改數字，法環都不可能拆成兩段以上總和都能被$8$整除的碎片。
