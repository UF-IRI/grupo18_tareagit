#include "gmock/gmock.h"

#include "funcion1.h"

using namespace testing;


 
TEST(funciones1_funciones_Test, funcione1) {

	int array1[100] = { 2, 4, 6 };

	ASSERT_THAT(calcular_promedio(array1, 3), 4);
	}

	TEST(funciones1_funciones_Test, funcione2) {

		int array2[100] = { 2, 5, 6 };

		ASSERT_THAT(numerosPares(array2, 3), 2);
	}

