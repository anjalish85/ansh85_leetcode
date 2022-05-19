<h2><a href="https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/">1356. Sort Integers by The Number of 1 Bits</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">arr</code>. Sort the integers in the array&nbsp;in ascending order by the number of <code style="user-select: auto;">1</code>'s&nbsp;in their binary representation and in case of two or more integers have the same number of <code style="user-select: auto;">1</code>'s you have to sort them in ascending order.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the array after sorting it</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [0,1,2,3,4,5,6,7,8]
<strong style="user-select: auto;">Output:</strong> [0,1,2,4,8,3,5,6,7]
<strong style="user-select: auto;">Explantion:</strong> [0] is the only integer with 0 bits.
[1,2,4,8] all have 1 bit.
[3,5,6] have 2 bits.
[7] has 3 bits.
The sorted array by bits is [0,1,2,4,8,3,5,6,7]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1024,512,256,128,64,32,16,8,4,2,1]
<strong style="user-select: auto;">Output:</strong> [1,2,4,8,16,32,64,128,256,512,1024]
<strong style="user-select: auto;">Explantion:</strong> All integers have 1 bit in the binary representation, you should just sort them in ascending order.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>