<h2><a href="https://leetcode.com/problems/count-hills-and-valleys-in-an-array/">2210. Count Hills and Valleys in an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>. An index <code style="user-select: auto;">i</code> is part of a <strong style="user-select: auto;">hill</strong> in <code style="user-select: auto;">nums</code> if the closest non-equal neighbors of <code style="user-select: auto;">i</code> are smaller than <code style="user-select: auto;">nums[i]</code>. Similarly, an index <code style="user-select: auto;">i</code> is part of a <strong style="user-select: auto;">valley</strong> in <code style="user-select: auto;">nums</code> if the closest non-equal neighbors of <code style="user-select: auto;">i</code> are larger than <code style="user-select: auto;">nums[i]</code>. Adjacent indices <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> are part of the <strong style="user-select: auto;">same</strong> hill or valley if <code style="user-select: auto;">nums[i] == nums[j]</code>.</p>

<p style="user-select: auto;">Note that for an index to be part of a hill or valley, it must have a non-equal neighbor on <strong style="user-select: auto;">both</strong> the left and right of the index.</p>

<p style="user-select: auto;">Return <i style="user-select: auto;">the number of hills and valleys in </i><code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,4,1,1,6,5]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
At index 0: There is no non-equal neighbor of 2 on the left, so index 0 is neither a hill nor a valley.
At index 1: The closest non-equal neighbors of 4 are 2 and 1. Since 4 &gt; 2 and 4 &gt; 1, index 1 is a hill. 
At index 2: The closest non-equal neighbors of 1 are 4 and 6. Since 1 &lt; 4 and 1 &lt; 6, index 2 is a valley.
At index 3: The closest non-equal neighbors of 1 are 4 and 6. Since 1 &lt; 4 and 1 &lt; 6, index 3 is a valley, but note that it is part of the same valley as index 2.
At index 4: The closest non-equal neighbors of 6 are 1 and 5. Since 6 &gt; 1 and 6 &gt; 5, index 4 is a hill.
At index 5: There is no non-equal neighbor of 5 on the right, so index 5 is neither a hill nor a valley. 
There are 3 hills and valleys so we return 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [6,6,5,5,4,1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
At index 0: There is no non-equal neighbor of 6 on the left, so index 0 is neither a hill nor a valley.
At index 1: There is no non-equal neighbor of 6 on the left, so index 1 is neither a hill nor a valley.
At index 2: The closest non-equal neighbors of 5 are 6 and 4. Since 5 &lt; 6 and 5 &gt; 4, index 2 is neither a hill nor a valley.
At index 3: The closest non-equal neighbors of 5 are 6 and 4. Since 5 &lt; 6 and 5 &gt; 4, index 3 is neither a hill nor a valley.
At index 4: The closest non-equal neighbors of 4 are 5 and 1. Since 4 &lt; 5 and 4 &gt; 1, index 4 is neither a hill nor a valley.
At index 5: There is no non-equal neighbor of 1 on the right, so index 5 is neither a hill nor a valley.
There are 0 hills and valleys so we return 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= nums.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>