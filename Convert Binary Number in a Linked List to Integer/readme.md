Problem link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

Binary is 2^0, 2^1 and 2^2

Essentially as we move along, we are shifting the bit. In other words, multiple by 2.

Since 2^0 is 1, we add +1 when bit is 1 and +0 when bit is zero.
