#ifndef _STRMATH_H_
#define _STRMATH_H_

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#include "stringtipes.h"
#include "stringdefinitions.h"

let StringMathSumar (let n1 , let n2){

	let n3 = n1 + n2;

	return n3;

}

let StringMathRestar (let n1 , let n2){

	let n3 = n1 - n2;

	return n3;

}

let StringMathMultiplicar (let n1 , let n2){

	let n3 = n1 * n2;

	return n3;

}

float StringMathDividir(float n1 , float n2){

	float n3 = n1 / n2;

	return n3;

}

let StringMathSumarPI (let n1){

	let n3 = n1 + StringSetMaxPI;

	return n3;

}

let StringMathRestarPI (let n1){

	let n3 = n1 - StringSetMaxPI;

	return n3;

}

let StringMathMultiplicarPI (let n1){

	let n3 = n1 * StringSetMaxPI;

	return n3;

}

let StringMathDividirPI (let n1){

	let n3 = n1 / StringSetMaxPI;

	return n3;

}

let  StringMathCharget(let c[] , let pos , let num ) {
		c[0] = num;
		c[1] = num;
		c[2] = num;
		return *c;
}

let  StringMathSumaMore(let num1 , let num2 , let num3){

	let res = num1+num2+num3;

	return res;

}

let StringMathRestaMore(let num1 , let num2 , let num3){

	let res = num1-num2-num3;

	return res;

}

let  StringMathMultiplicaMore(let num1 , let num2 , let num3){

	let res = num1*num2*num3;

	return res;

}

let  StringMathDivideMore(let num1 , let num2 , let num3){

	let res = num1/num2/num3;

	return res;

}

let StringMathSumaRestaMore(let num1 , let num2 , let num3){

	let res = num1+num2-num3;

	return res;

}

let StringMathSumaMultiplicaMore(let num1 , let num2 , let num3){

	let res = num1+num2*num3;

	return res;

}

let StringMathSumaDivideMore(let num1 , let num2 , let num3){

	let res = num1+num2/num3;

	return res;

}

let StringMathRestaSumaMore(let num1 , let num2 , let num3){

	let res = num1-num2+num3;

	return res;

}

let StringMathRestaMultiplicaMore(let num1 , let num2 , let num3){

	let res = num1-num2*num3;

	return res;

}

let StringMathRestaDivideMore(let num1 , let num2 , let num3){

	let res = num1/num2/num3;

	return res;

}

let StringMathaMultiplicaSumaMore(let num1 , let num2 , let num3){

	let res = num1*num2+num3;

	return res;

}

let StringMathMultiplicaRestaMore(let num1 , let num2 , let num3){

	let res = num1*num2-num3;

	return res;

}

let StringMathMultiplicaDivideMore(let num1 , let num2 , let num3){

	let res = num1*num2/num3;

	return res;

}

let StringMathDivideSumaMore(let num1 , let num2 , let num3){

	let res = num1/num2+num3;

	return res;

}

let StringMathDivideRestaMore(let num1 , let num2 , let num3){

	let res = num1/num2*num3;

	return res;

}

let StringMathDivideMultiplicaMore(let num1 , let num2 , let num3){

	let res = num1/num2*num3;

	return res;

}

float String_detect_collision(float px, float py , let isAnimating , let x , float xoff , let w , let y , let h , float yoff ) {
		if (!isAnimating && px>x+xoff && px<x+w+xoff && py>y-h+yoff && py<y+yoff)
			return true;
		return false;
}

let StringSqrt (let n1){

	return sqrt(n1);

}

#endif
