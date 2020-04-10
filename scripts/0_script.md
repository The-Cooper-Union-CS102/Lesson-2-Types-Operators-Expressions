-------------------------------------------------------------------------------
subtitles: auto
-------------------------------------------------------------------------------
```
Data Representation (Reading Binary)
```

This section gives a brief discussion of how data on a computer is typically
stored, and how we can insert that data into our program.

-------------------------------------------------------------------------------
```
Binary
```
Every piece of data, including the code you write, is stored in the computer as
bits.  A bit is an abstract piece of data represented by a 1 or 0.  Typically
the physical implementation of a bit is a voltage level coming from tiny
devices in your computer.  These devices vary even within a single computer.
The fastest devices for reading and writing bits are the transistors in your
CPU.  The next fastest are the capacitors in your RAM.  The next fastest are
the magnets in your harddrive.  The next fastest is on the internet or
network.

It's all right if that is gibberish to you.  If you'd like to learn more about
all of that, you should take a computer architecture class.  You won't be
needing it here.

It might not seem like you can do a lot with just ones and zeros, but it turns
out you can represent almost basically anything your heart desires.

-------------------------------------------------------------------------------
```
Binary Numbers
```
Numbers are the first obvious item of interest.  You are used to base 10
(meaning 10 symbols, 0 through 9) but computers obviously prefer base 2
(meaning 2 symbols, 0 and 1).  So how do we represent the numbers we known and
love?  Well let's see if you can find the pattern.

0 and 1 are represented the same as in base 10, 2 is where things get
interesting.  Just as when we get to 10 in base 10, we have to add another
digit when we get to 2 in base 2, giving us the digits one zero.  Here is
a short table of numbers in their decimal and binary representation.

```md
| 0 | 1 | 2  | 3  | 4   | 5   | 6   | 7   |
|---|---|----|----|-----|-----|-----|-----|
| 0 | 1 | 10 | 11 | 100 | 101 | 110 | 111 |
```

The method of finding the value of an N bit binary number in decimal goes like
this.

1. Number the bits from 0 at the right to N minus 1 at the left
2. For every bit, if it is 1, add 2 to the power of its number otherwise add 0

A similar algorithm applies for a decimal number, except you add the digit
times 10 to the power of its number.  The largest number you can represent
with this scheme is 2 to the N, minus 1.  Can you generalize this to other
bases?

This is all well and good for positive numbers, but how about negative?
Usually we add a minus sign, but computers only have ones and zeros.  Your
first reaction might be to add another bit to the left and maybe 0 would
represent positive and 1 would represent negative.  Or maybe add an extra bit
to the left and then flip all of the bits if it's negative.  These methods
are called signed magnitude representation and one's complement.  We won't
talk about those because they have some problems and they are rarely used
anymore.  The main representation used now adays is called two's complement.

With two's complement, we add a bit to the left and assign it a numerical value
just like all the other bits.  What value should we assign to make things 
roughly symmetric?  If we give it the value of negative two times the next
largest value, we can represent everything from that negative number to our
original largest value.

It's probably not obvious to you why this is a better choice than the others.
For now you will have to trust that it has a lot of convenient properties.

-------------------------------------------------------------------------------
```
Characters
```
Characters are similar to numbers.  In fact, you can think of each character as
being represented by a number.  One very common and very basic format is
ASCII.  Typically any text files on your computer, including code, are stored
in this format.  You may be able to run "man ascii" and get a nice chart of
numbers and their corresponding letters.  Make sure to scroll down to the
decimal set.  ASCII uses 7 bits to represent many english characters.  For more
complex character sets, UTF8 is common, though you won't need to know about it
here.

Let's go through some simple conversion examples.

Say someone gives you the binary number "00110101".  First, convert it to an
integer with the method we discussed earlier, 1 + 4 + 16 + 32 = 53.  Now check
your handy ASCII table and find that this number corresponds to the character
"5".  Note that this is different than the number 5 which has a binary
representation of "00000101"!

Now how would you find the binary representation of the letter "A"?  Just do
the same in reverse.  Looking up the letter "A" in the ASCII table gives
us 65.  Converting to binary is relatively easy here.  The largest power
of 2 less than 65 is 64 (which is 2 to the power of 6) giving a remainder of 1.
Then the 1 is a power of 2 (which is 2 to the power of 0) so we get the binary
number "01000001"

There you have it, you know know how to read and write binary.

-------------------------------------------------------------------------------
```
Floating Point Numbers
```
Now, there is one more basic kind of number that has a non-obvious
representation, numbers with decimal points.  The main method we will use
to represent these numbers is called "floating point".  This is very similar
to scientific notation.  For example consider the number 32e-4 (or 32 times
10 to the -4).  While this number can be interpreted as the decimal number
0.0032, we encoded its value using only the integers 32 and -4.  Note how the
nubmer to the right of the "e" only serves to move around the decimal.  This
is what is meant by "floating" point.  The standard floating point format
assigns one bit to the sign of the number, some bits for the first number,
and some bits for the second number.  Note that I am skipping over a lot of
nuance and complexity here, but suffice it to say this will be all you need to
know to learn basic programming.