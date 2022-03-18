<h2><a href="https://leetcode.com/problems/convert-1d-array-into-2d-array/">2022. Convert 1D Array Into 2D Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> 1-dimensional (1D) integer array <code style="user-select: auto;">original</code>, and two integers, <code style="user-select: auto;">m</code> and <code style="user-select: auto;">n</code>. You are tasked with creating a 2-dimensional (2D) array with <code style="user-select: auto;"> m</code> rows and <code style="user-select: auto;">n</code> columns using <strong style="user-select: auto;">all</strong> the elements from <code style="user-select: auto;">original</code>.</p>

<p style="user-select: auto;">The elements from indices <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> (<strong style="user-select: auto;">inclusive</strong>) of <code style="user-select: auto;">original</code> should form the first row of the constructed 2D array, the elements from indices <code style="user-select: auto;">n</code> to <code style="user-select: auto;">2 * n - 1</code> (<strong style="user-select: auto;">inclusive</strong>) should form the second row of the constructed 2D array, and so on.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an </em><code style="user-select: auto;">m x n</code><em style="user-select: auto;"> 2D array constructed according to the above procedure, or an empty 2D array if it is impossible</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2021/08/26/image-20210826114243-1.png" style="width: 500px; height: 174px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> original = [1,2,3,4], m = 2, n = 2
<strong style="user-select: auto;">Output:</strong> [[1,2],[3,4]]
<strong style="user-select: auto;">Explanation:</strong> The constructed 2D array should contain 2 rows and 2 columns.
The first group of n=2 elements in original, [1,2], becomes the first row in the constructed 2D array.
The second group of n=2 elements in original, [3,4], becomes the second row in the constructed 2D array.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> original = [1,2,3], m = 1, n = 3
<strong style="user-select: auto;">Output:</strong> [[1,2,3]]
<strong style="user-select: auto;">Explanation:</strong> The constructed 2D array should contain 1 row and 3 columns.
Put all three elements in original into the first row of the constructed 2D array.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> original = [1,2], m = 1, n = 1
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> There are 2 elements in original.
It is impossible to fit 2 elements in a 1x1 2D array, so return an empty 2D array.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= original.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= original[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 4 * 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>