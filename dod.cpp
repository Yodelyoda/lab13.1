#include <math.h>
#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsDod::dod() {
	double R = ((pow(x, 2) - 2 * x + 1) * (2 * n - 1)) / ((2 * n + 1) * (pow(x, 2) + 2 * x + 1));
	a *= R; // доданок домножується на
}