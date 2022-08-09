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
		   #ternarSearch
		   { 
		    background-color: #009d4b;
		   }
  		</style> <!-- Выделение навигации-->
 

	</head>


	<body>

		<?php include('../nav.php'); // включает навигацию?>




		<br></br>
		<div class = "Text"> <Biggreen>Алгоритм тернарного поиска</Biggreen> <br></br><br></br>

			<green>Тернарный поиск</green> - это алгоритм нахождения минимума или максимума в унимодальной функции, то есть в функции, которая сначала возрастает, потом убывает, либо наоборот.<br></br>

			<green>Алгоритм:</green> возьмём две точки <green>m1</green> и <green>m2</green>. <br></br>

			Если <green>f(m1) < f(m2)</green>, то для поиска минимума <green>right = m2</green>. <br></br>
			Иначе <green>left = m1</green>.<br></br>

			После сравнения мы получаем новый отрезок и проделываем туже операцию с ним, пока длина отрезка больше определённой точности (EPS).<br></br>

			Асимптотика <green>O(log n)</green>, где <green>n</green> - длина отрезка <green>(right - left)</green>.<br></br>
			

			<a href="terS.cpp" style = "text-decoration: none;">Код</a><br></br>

			

<br></br><br></br><br></br><br></br><br></br><br></br><br></br>
		The end...

		</div>

	
	<!-- jQuery -->

	</body>
</html>

