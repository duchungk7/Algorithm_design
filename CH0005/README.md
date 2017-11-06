
Example: 求 1 - 1/2 + 1/3 - 1/4 +...+ 1/99 - 1/100


演算法解析:

S1： sigh=1

S2： sum=1

S3： deno=2

S4： sigh=(-1)×sigh

S5： term= sigh×(1/deno )

S6： term=sum+term

S7： deno= deno +1

S8：若deno<=100，返回S4；否則，結束。
===========================================