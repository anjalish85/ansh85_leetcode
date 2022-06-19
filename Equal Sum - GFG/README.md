# Equal Sum
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">Arr</strong> of length <strong style="user-select: auto;">N</strong>. Determine if there exists an element in the array such that the sum of the elements on its left is equal to the sum of the elements on its right. If there are no elements to the left/right, then the sum is considered to be zero.&nbsp;<br style="user-select: auto;">
Formally, find an i, such that, <strong style="user-select: auto;">Arr<sub style="user-select: auto;">1&nbsp;</sub>+ Arr<sub style="user-select: auto;">2&nbsp;</sub>... Arr<sub style="user-select: auto;">i-1</sub> = Arr<sub style="user-select: auto;">i+1&nbsp;</sub>+ Arr<sub style="user-select: auto;">i+2&nbsp;</sub>... Arr<sub style="user-select: auto;">N</sub></strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
Arr[] = {1, 2, 3, 3}
<strong style="user-select: auto;">Output:</strong> YES
<strong style="user-select: auto;">Explanation:</strong> Consider i = 3, for [1, 2] 
sum is 3 and for&nbsp;[3]&nbsp;sum is also 3.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
Arr[] = {1, 5}
<strong style="user-select: auto;">Output:</strong> NO
<strong style="user-select: auto;">Explanation:</strong>&nbsp;No such index present.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">equilibrium()</strong>&nbsp;which takes array <strong style="user-select: auto;">arr</strong> and size&nbsp;<strong style="user-select: auto;">n</strong>,&nbsp;as input parameters&nbsp;and returns a&nbsp;string representing the answer(<strong style="user-select: auto;">YES&nbsp;</strong>or <strong style="user-select: auto;">NO</strong>).&nbsp;You don't to print answer or take inputs.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup>&nbsp;<br style="user-select: auto;">
1 ≤ Arr[i] ≤ 10<sup style="user-select: auto;">6</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>