<h2><a href="https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/">1309. Decrypt String from Alphabet to Integer Mapping</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> formed by digits and <code style="user-select: auto;">'#'</code>. We want to map <code style="user-select: auto;">s</code> to English lowercase characters as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Characters (<code style="user-select: auto;">'a'</code> to <code style="user-select: auto;">'i')</code> are represented by (<code style="user-select: auto;">'1'</code> to <code style="user-select: auto;">'9'</code>) respectively.</li>
	<li style="user-select: auto;">Characters (<code style="user-select: auto;">'j'</code> to <code style="user-select: auto;">'z')</code> are represented by (<code style="user-select: auto;">'10#'</code> to <code style="user-select: auto;">'26#'</code>) respectively.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the string formed after mapping</em>.</p>

<p style="user-select: auto;">The test cases are generated so that a unique mapping will always exist.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "10#11#12"
<strong style="user-select: auto;">Output:</strong> "jkab"
<strong style="user-select: auto;">Explanation:</strong> "j" -&gt; "10#" , "k" -&gt; "11#" , "a" -&gt; "1" , "b" -&gt; "2".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1326#"
<strong style="user-select: auto;">Output:</strong> "acz"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of digits and the <code style="user-select: auto;">'#'</code> letter.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> will be a valid string such that mapping is always possible.</li>
</ul>
</div>