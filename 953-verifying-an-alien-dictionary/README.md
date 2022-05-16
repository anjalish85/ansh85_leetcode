<h2><a href="https://leetcode.com/problems/verifying-an-alien-dictionary/">953. Verifying an Alien Dictionary</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different <code style="user-select: auto;">order</code>. The <code style="user-select: auto;">order</code> of the alphabet is some permutation of lowercase letters.</p>

<p style="user-select: auto;">Given a sequence of <code style="user-select: auto;">words</code> written in the alien language, and the <code style="user-select: auto;">order</code> of the alphabet, return <code style="user-select: auto;">true</code> if and only if the given <code style="user-select: auto;">words</code> are sorted lexicographically in this alien language.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation: </strong>As 'h' comes before 'l' in this language, then the sequence is sorted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation: </strong>As 'd' comes after 'l' in this language, then words[0] &gt; words[1], hence the sequence is unsorted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["apple","app"], order = "abcdefghijklmnopqrstuvwxyz"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation: </strong>The first three characters "app" match, and the second string is shorter (in size.) According to lexicographical rules "apple" &gt; "app", because 'l' &gt; '∅', where '∅' is defined as the blank character which is less than any other character (<a href="https://en.wikipedia.org/wiki/Lexicographical_order" target="_blank" style="user-select: auto;">More info</a>).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">order.length == 26</code></li>
	<li style="user-select: auto;">All characters in <code style="user-select: auto;">words[i]</code> and <code style="user-select: auto;">order</code> are English lowercase letters.</li>
</ul>
</div>