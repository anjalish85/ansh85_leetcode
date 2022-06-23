# Implement strstr
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your task is to implement the function <strong style="user-select: auto;">strstr</strong>. The function takes two strings as&nbsp;arguments <strong style="user-select: auto;">(s,x)</strong> and&nbsp;&nbsp;locates the occurrence of the string<strong style="user-select: auto;"> x</strong>&nbsp;in the string <strong style="user-select: auto;">s</strong>.&nbsp;The function returns and integer denoting the <strong style="user-select: auto;">first occurrence </strong>of the string <strong style="user-select: auto;">x</strong> in <strong style="user-select: auto;">s</strong> (0 based indexing).</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Note:&nbsp;</span></strong><span style="font-size: 18px; user-select: auto;">You are not allowed to use inbuilt function.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>s = GeeksForGeeks, x = Fr
<strong style="user-select: auto;">Output: </strong>-1<strong style="user-select: auto;">
Explanation: </strong>Fr is not present in the
string GeeksForGeeks as substring.<strong style="user-select: auto;">
</strong></span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>s = GeeksForGeeks, x = For
<strong style="user-select: auto;">Output: </strong>5<strong style="user-select: auto;">
Explanation: </strong>For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't have to take any input. Just complete the <strong style="user-select: auto;">strstr() </strong>function which takes two strings <strong style="user-select: auto;">str, target</strong> as an input parameter. The function returns -1 if no match if found else it returns an integer denoting the first occurrence of the x in the string s.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(|s|*|x|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note </strong>: Try to solve the question in constant space complexity.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= |s|,|x| &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>