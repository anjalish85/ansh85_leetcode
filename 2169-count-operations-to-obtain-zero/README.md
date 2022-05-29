<h2><a href="https://leetcode.com/problems/count-operations-to-obtain-zero/">2169. Count Operations to Obtain Zero</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two <strong style="user-select: auto;">non-negative</strong> integers <code style="user-select: auto;">num1</code> and <code style="user-select: auto;">num2</code>.</p>

<p style="user-select: auto;">In one <strong style="user-select: auto;">operation</strong>, if <code style="user-select: auto;">num1 &gt;= num2</code>, you must subtract <code style="user-select: auto;">num2</code> from <code style="user-select: auto;">num1</code>, otherwise subtract <code style="user-select: auto;">num1</code> from <code style="user-select: auto;">num2</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">num1 = 5</code> and <code style="user-select: auto;">num2 = 4</code>, subtract <code style="user-select: auto;">num2</code> from <code style="user-select: auto;">num1</code>, thus obtaining <code style="user-select: auto;">num1 = 1</code> and <code style="user-select: auto;">num2 = 4</code>. However, if <code style="user-select: auto;">num1 = 4</code> and <code style="user-select: auto;">num2 = 5</code>, after one operation, <code style="user-select: auto;">num1 = 4</code> and <code style="user-select: auto;">num2 = 1</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">number of operations</strong> required to make either</em> <code style="user-select: auto;">num1 = 0</code> <em style="user-select: auto;">or</em> <code style="user-select: auto;">num2 = 0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num1 = 2, num2 = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 
- Operation 1: num1 = 2, num2 = 3. Since num1 &lt; num2, we subtract num1 from num2 and get num1 = 2, num2 = 3 - 2 = 1.
- Operation 2: num1 = 2, num2 = 1. Since num1 &gt; num2, we subtract num2 from num1.
- Operation 3: num1 = 1, num2 = 1. Since num1 == num2, we subtract num2 from num1.
Now num1 = 0 and num2 = 1. Since num1 == 0, we do not need to perform any further operations.
So the total number of operations required is 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num1 = 10, num2 = 10
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> 
- Operation 1: num1 = 10, num2 = 10. Since num1 == num2, we subtract num2 from num1 and get num1 = 10 - 10 = 0.
Now num1 = 0 and num2 = 10. Since num1 == 0, we are done.
So the total number of operations required is 1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= num1, num2 &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>