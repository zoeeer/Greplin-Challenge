# [Greplin-Challenge](http://challenge.greplin.com/)
=================

challenge.greplin.com


I encountered the [Greplin programming challenge](http://challenge.greplin.com/) when I was reading a LeetCode question [Longest Palindromic Substring](http://leetcode.com/2011/11/longest-palindromic-substring-part-i.html). Then I linked to challenge.greplin.com and wrote these programs.

Almost at the same time I just learned Github is a great place. So I signed up here and committed my first source file. Yeah, This is my first repo!

### Level 1

This is the same as the LeetCode Longest Palindromic Substring question above.
I just used the same code. I also created a LeetCode repo soon after this :)

### Level 2

Haven't upload this code yet.

### Level 3

I think this code I wrote is quite neat and good-looking :p, and efficient enough for this question.
So I wish to share this one first.

Maybe my approach is not the most efficient one, since it costs O(2^N) time and space.
Luckily the Greplin data has just about 22 numbers, so it won't take long. (within second, actually)

At first I used a vector< vector< int > > to store all the subsets. It took almost 1 minute on my computer.
Then I found it's not necessary to remember all the numbers in the subsets, cos' we only need their sum.
So I improved my code and then it costs less than a second. Aha.

Here is my approach. The input numbers are sorted. Read the numbers one at a time.
After we take in the first number x0, this single number makes a subset and the sum is x0 itself.

Store the sum of every possible subset in an array A.

When we take in a number x, we have sums of all the previous subsets in A. If any of them equals x,
it means the sum of some numbers in the input sequence equals another number x from that sequence,
i.e. put together x and these numbers and it's a subset we're looking for.

Since the input sequence is sorted, for each incoming x, x is bigger than the previous numbers.
If any satisfactory subset contains x, we can't miss it.

And for each previous subset before x comes in, put in x and we get a new subset. 
With the help of array A, we can easily get the sum by add previous elements in A with x.
Then we can just wait for the next number.

That's the idea. Hope it explains.
