#include <stdio.h>
#include "pico/stdlib.h"

struct test_struct {
	int test_member;
};

int main() {
	stdio_init_all();

	printf("Starting\n");

	struct test_struct *t;

	t->test_member = 1;
	printf("test_member: %d\n", t->test_member);
	printf("test_member: %d\n", t->test_member);
	printf("test_member: %d\n", t->test_member);
	printf("test_member: %d\n", t->test_member);

	printf("Reset and repeat\n");
	t->test_member = 1;
	printf("test_member: %d\n", t->test_member);
	printf("test_member: %d\n", t->test_member);
	printf("test_member: %d\n", t->test_member);
	printf("test_member: %d\n", t->test_member);

	printf("For loop\n");
	t->test_member = 1;
	for (int i = 0; i < 4; i++) {
		printf("test_member: %d\n", t->test_member);
	}

	printf("Exiting\n");
}