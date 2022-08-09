<!DOCTYPE HTML>
<!--
	InnoCalc
	p.s. Egor U
-->
<html>

	<head>

		<meta http-equiv="Content-Type" content="Plus/html; charset=utf-8">
		<link rel="stylesheet" href="../../style.css">
		<link rel="stylesheet" href="../../gorizoNav.css">
		<link rel="stylesheet" href="../../verticalNav.css">

		<style type="text/css">
		   #binaryPow 
		   { 
		    background-color: #009d4b;
		   }
  		</style> <!-- Выделение навигации-->

	</head>
	<body>

	<?php include('../nav.php'); // включает навигацию?>


	<br></br>
	<div class = "Text"> <biggreen>Бинарное возведения числа в степень</biggreen> <br></br><br></br>


			Бинарное возведение в степень — это приём, позволяющий возводить любое число в n-ую степень за O(log n) умножений , а не за n при обычном подходе.<br></br>

Этот приём применим к любой <green>ассоциативной операции</green>, а не только к умножению чисел. Напомним, операция называется ассоциативной, если для любых a, b, c выполняется:<br></br>

 <green>(a * b) * c = a * (b * c)</green> <br></br>
 То есть порядок выполнения действий не важен. <br></br>


<biggreen>Алгоритм</biggreen><br></br>
Заметим, что для любого числа a и чётного числа n выполнимо тождество:  <br></br>

 <green>a<sup>n</sup> = a<sup>n/2</sup> * a<sup>n/2</sup></green>  <br></br>

Для чётного n мы показали, как, потратив всего одну операцию умножения, можно свести задачу к вдвое меньшей степени.
Когда степень n не четна , мы просто перейдём к степени n-1, которая будет уже чётной: <br></br>

 <green>a<sup>n</sup> = a<sup>n-1</sup> * a </green>   <br></br>


	<a href="Code.cpp" style = "text-decoration: none;">Код</a><br></br>



		</div>

	
	<!-- jQuery -->

	</body>
</html>

