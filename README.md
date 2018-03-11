# sjson
A light weight Json library, run fast without any memory allocation.
sjson do string operation on fixed-size buffer, which means zero memory fragmentation.
It's suitable for small embedded platform.

# 2018-3-11
remove sprintf, because my MCU does not support it.
So add a intToStr to replace sprintf.

