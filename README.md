# CodingChallenge
A collection of coding challenges in various forms including some mathematical challenges.

> ## ReverseInt
> Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2<sup>31</sup>, 2<sup>31</sup> - 1], then return 0.
> ### Solution:
> Passed leetcode tests, but not 100% sure the solution will actually allow an integer to equal the INT32_MAX or INT32_MIN values.
> ### To-Do:
> - ~~Design some unit tests to thoroughly examine if the code is functioning as intended.~~
> - Unit tests are complete.

> ## RomanToInt
> Given a roman numeral, convert it to an integer.
> ```
> Symbol:     I     V     X     L     C     D     M
> Value:      1     5    10    50   100   500  1000
> ```
> ### Solution:
> Correctly creates an integer from a roman numeral.
> There were several bugs preventing this from working properly. 
> One was it not adding roman numerals which were repeated like `III`.
> Another was not properly evaluating subtraction notation. 
> These have been fixed.
> 
> ### To-Do:
> - ~~Create unit tests to verify functionality.~~
> - Complete unit test to check all combinations of roman numerals. Specifically need to test subtraction notation and combinations of addition and subtraction notation.
> - It would be nice to return a value indicating the roman numeral was invalid.

> ## Two-Sum
> Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 
> You may assume that each input would have exactly one solution, and you may not use the same element twice. 
> You can return the answer in any order.
> 
> ### Solution:
> Used an iterative method to solve the problem. There is likely a faster way, but this solution is simple and effective.
> 
> ### To-Do:
> - Create unit tests.
> - Try to find a faster solution.

> ## Non Negative Integer without Consecutive Ones
> Given a positive integer n, find the number of non-negative integers less than or equal to n, whose binary representations do NOT contain consecutive ones.
>
> ### Solution:
> My solution is a brute force example and has too great of a time complexity. The solution is not acceptable.
> 
> ### To-Do:
> - Re-implement a more efficient solution.
> - Build unit tests.

> ## Int-to-Binary
> A very short implementation to convert an integer to a 32-bit binary number.
> 
> ### To-Do:
> - Unit testing would be good practice, but we're using a built-in method. It really isn't needed.

> ## Running-Sum:
> Given an array nums (vector). We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). 
> Return the running sum of nums. (Should accept and return a vector)
> 
> ### Solution:
> Tested and working.
> 
> ### To-Do:
> - Build unit tests.

> ## Corporate Flight Bookings:
> There are n flights that are labeled from 1 to n.
>
> You are given an array of flight bookings bookings, where bookings[i] = [first<sub>i</sub>, last<sub>i</sub>, seats<sub>i</sub>] represents a booking for flights first<sub>i</sub> through last<sub>i</sub> (inclusive) with seats<sub>i</sub> seats reserved for each flight in the range.
>
> Return an array answer of length n, where answer[i] is the total number of seats reserved for flight i.
> ```
> Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
> Output: [10,55,45,25,25]
> Example:
> Flight labels:        1   2   3   4   5
> Booking 1 reserved:  10  10
> Booking 2 reserved:      20  20
> Booking 3 reserved:      25  25  25  25
> Total seats:         10  55  45  25  25
> Hence, answer = [10,55,45,25,25]
> ```
> ### Solution:
> 
> ### To-Do:
> - create unit tests