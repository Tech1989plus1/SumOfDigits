//
//  main.c
//  HW01
//
//  Created by Derrick Marshall on 6/22/17.
//  Copyright © 2017 Derrick Marshall. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int countDown(int val);

int main(int argc, char * argv[]) {
	
	int value = 0;
	
	if (argc != 2) {
		printf("Usage: sod DIGIT\n");
		exit(1);
	}
	
	value = countDown(atoi(argv[1]));
	
	printf("%d\n", value);
	
	return 0;
}

int countDown(int val){
	if (val ==  0)
		return val;
	
	 val = val + countDown(val - 1);
	
	return val;
}
