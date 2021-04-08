# CodingChallenge
A collection of coding challenges in various forms including some mathematical challenges.

> ## ReverseInt
> Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2<sup>31</sup>, 2<sup>31</sup> - 1], then return 0.
> ### Solution:
> Passed leetcode tests, but not 100% sure the solution will actually allow an integer to equal the INT32_MAX or INT32_MIN values.
> ### To-Do:
> Design some unit tests to thoroughly examine if the code is functioning as intended.

> ## RomanToInt
> Given a roman numeral, convert it to an integer.
> ```
> Symbol:     I     V     X     L     X     D     M
> Value:      1     5    10    50   100   500  1000
> ```
> ### Solution:
> Correctly creates an integer from a roman numeral.
> 
> ### To-Do:
> Create unit tests to verify functionality.

> ## Two-Sum
> Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 
> You may assume that each input would have exactly one solution, and you may not use the same element twice. 
> You can return the answer in any order.
> 
> ### Solution:
> Used an iterative method to solve the problem. There is likely a faster way, but this solution is simple and effective.
> 
> ### To-Do:
> Create unit tests. Try to find a faster solution.

> ## Non Negative Integer without Consecutive Ones
> Given a positive integer n, find the number of non-negative integers less than or equal to n, whose binary representations do NOT contain consecutive ones.
>
> ### Solution:
> My solution is a brute force example and has too great of a time complexity. The solution is not acceptable.
> 
> ### To-Do:
> Re-implement a more efficient solution. Build unit tests.

> ## Int-to-Binary
> A very short implementation to convert an integer to a 32-bit binary number.
> 
> ### To-Do:
> Unit testing would be good practice, but we're using a built-in method. It really isn't needed.

> ## Running-Sum:
> Given an array nums (vector). We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). 
> Return the running sum of nums. (Should accept and return a vector)
> 
> ### Solution:
> Tested and working.
> 
> ### To-Do:
> Build unit tests.
> 