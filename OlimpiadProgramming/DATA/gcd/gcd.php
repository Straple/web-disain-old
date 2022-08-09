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
		   #gcd
		   { 
		    background-color: #009d4b;
		   }
  		</style> <!-- Выделение навигации-->
 

	</head>


	<body>

<?php include('../nav.php'); // включает навигацию?>





		<br></br>
		<div class = "Text"> <Biggreen>Наибольший общий делитель</Biggreen> <br></br><br></br>

				<green>НОД (gcd - greatest common divison)</green> - это набольшее число <green>d</green> такое, что <green>a</green> и <green>b</green> делятся на <green>d</green>.<br></br>
				<green>Алгоритм:</green> большее число будем брать по остатку на меньшее. Асимптотика <green>O(log min(a, b))</a><br></br>


				<a href="gcd.cpp" style = "text-decoration: none;">Код</a><br></br>

				<pre>
#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    while(a > 0 && b > 0)
    {
        if(a < b) b %= a;
        else a %= b;
    }
    return max(a, b);
}


int main()
{
    return 0;
}

				</pre>



		</div>

	
	<!-- jQuery -->

	</body>
</html>

