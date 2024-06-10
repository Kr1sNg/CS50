#include <stdio.h>
#include <cs50.h>

// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

float half(float bill, float tax, float tip);

int main(void)
{
	float bill_amount = get_float("Bill before tax and tip: ");
	float tax_percent = get_float("Sale tax percent: ");
	float tip_percent = get_float("Tip percent: ");

	printf("You will own $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}
// make the function:

float half(float bill, float tax, float tip)
{
	float half = (float) bill / 2 * ((float) tax / 100 + 1) * ((float) tip / 100 + 1);
	return half;
}
