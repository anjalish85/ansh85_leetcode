<h2><a href="https://leetcode.com/problems/first-letter-to-appear-twice/">2351. First Letter to Appear Twice</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> consisting of lowercase English letters, return <em style="user-select: auto;">the first letter to appear <strong style="user-select: auto;">twice</strong></em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">A letter <code style="user-select: auto;">a</code> appears twice before another letter <code style="user-select: auto;">b</code> if the <strong style="user-select: auto;">second</strong> occurrence of <code style="user-select: auto;">a</code> is before the <strong style="user-select: auto;">second</strong> occurrence of <code style="user-select: auto;">b</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> will contain at least one letter that appears twice.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abccbaacz"
<strong style="user-select: auto;">Output:</strong> "c"
<strong style="user-select: auto;">Explanation:</strong>
The letter 'a' appears on the indexes 0, 5 and 6.
The letter 'b' appears on the indexes 1 and 4.
The letter 'c' appears on the indexes 2, 3 and 7.
The letter 'z' appears on the index 8.
The letter 'c' is the first letter to appear twice, because out of all the letters the index of its second occurrence is the smallest.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcdd"
<strong style="user-select: auto;">Output:</strong> "d"
<strong style="user-select: auto;">Explanation:</strong>
The only letter that appears twice is 'd' so we return 'd'.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> has at least one repeated letter.</li>
</ul>
</div>