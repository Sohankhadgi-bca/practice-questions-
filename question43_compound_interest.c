#include <stdio.h>
#include <math.h>
int main(void) { double principal, rate, time; int compounds_per_year; printf("Enter principal, annual rate (%%), years, and compounding periods/year: "); if (scanf("%lf%lf%lf%d", &principal, &rate, &time, &compounds_per_year) != 4 || principal < 0 || time < 0 || rate <= -100 || compounds_per_year <= 0) { fprintf(stderr, "Invalid input.\n"); return 1; } double amount = principal * pow(1 + rate / (100.0 * compounds_per_year), compounds_per_year * time); printf("Compound amount = %.2f\nCompound interest = %.2f\n", amount, amount - principal); return 0; }
