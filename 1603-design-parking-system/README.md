<h2><a href="https://leetcode.com/problems/design-parking-system/">1603. Design Parking System</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a parking system for a parking lot. The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">ParkingSystem</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">ParkingSystem(int big, int medium, int small)</code> Initializes object of the <code style="user-select: auto;">ParkingSystem</code> class. The number of slots for each parking space are given as part of the constructor.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool addCar(int carType)</code> Checks whether there is a parking space of <code style="user-select: auto;">carType</code> for the car that wants to get into the parking lot. <code style="user-select: auto;">carType</code> can be of three kinds: big, medium, or small, which are represented by <code style="user-select: auto;">1</code>, <code style="user-select: auto;">2</code>, and <code style="user-select: auto;">3</code> respectively. <strong style="user-select: auto;">A car can only park in a parking space of its </strong><code style="user-select: auto;">carType</code>. If there is no space available, return <code style="user-select: auto;">false</code>, else park the car in that size space and return <code style="user-select: auto;">true</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["ParkingSystem", "addCar", "addCar", "addCar", "addCar"]
[[1, 1, 0], [1], [2], [3], [1]]
<strong style="user-select: auto;">Output</strong>
[null, true, true, false, false]

<strong style="user-select: auto;">Explanation</strong>
ParkingSystem parkingSystem = new ParkingSystem(1, 1<lighter data-id="lgt7923914918251205" data-unique-lighter-id="1" style="background-color: rgb(255, 255, 131); user-select: auto;">, 0);<br style="user-select: auto;">parking</lighter>System.addCar(1); // return true because there is 1 available slot for a big car
parkingSystem.addCar(2); // return true because there is 1 available slot for a medium car
parkingSystem.addCar(3); // return false because there is no available slot for a small car
parkingSystem.addCar(1); // return false because there is no available slot for a big car. It is already occupied.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= big, medium, small &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">carType</code> is <code style="user-select: auto;">1</code>, <code style="user-select: auto;">2</code>, or <code style="user-select: auto;">3</code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">1000</code> calls will be made to <code style="user-select: auto;">addCar</code></li>
</ul>
</div>