#include "gmock/gmock.h"

#include "funcion1.h"

using namespace testing;

 
	TEST(funciones1_funciones_Test, funcione1) {

        ASSERT_THAT(calcular_promedio(2, 4, 6), 4);
	}

	TEST(funciones1_funciones_Test, funcione2) {

		ASSERT_THAT(numerosPares(2, 5, 6), 2);
	}

