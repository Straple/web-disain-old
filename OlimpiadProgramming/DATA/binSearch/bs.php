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
		   #binSearch
		   { 
		    background-color: #009d4b;
		   }
  		</style> <!-- Выделение навигации-->
 

	</head>


	<body>


	<?php
		include('../nav.php');
	?>


	<br></br>
	<div class = "Text"> <biggreen>Алгоритм бинарного поиска</biggreen> <br></br><br></br>

		<green>Бинарный поиск</green> - это алгоритм нахождения элемента в убывающей или возрастающей функции. Он завключается в том, что на каждом шаге множество объектов делится пополам и в работе остаётся та часть, где находится искомый объект.<br></br>

		<green>Алгоритм:</green> брать элемент посередине, между границами и сравнивать его с искомым. В зависимости от сравнения двигать границу. Делать так пока левая граница меньше правой границы - 1.<br></br><br></br>

		<green>left</green> - левая граница<br></br>
		<green>right</green> - правая<br></br>
		<green>m = (left + right) / 2</green> - индекс элемента посередине<br></br>

		Так как каждый раз мы делим область поиска пополам, то асимптотика <green>O(log n)</green>, где <green>n</green> - длина отрезка <green>(right - left)</green>.<br></br>


		<a href="binS.cpp" style = "text-decoration: none;">Код</a><br></br>

			

<br></br><br></br><br></br><br></br><br></br><br></br><br></br>
		The end...

		</div>

	
	<!-- jQuery -->

	</body>
</html>

