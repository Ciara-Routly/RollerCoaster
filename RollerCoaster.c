/* Ciara Routly */

/* This program calculates the total number of people that can be supported 
on a rollercoaster track when given the total length of the track and the 
maximum length of the train. Note: Only 25% of the track can be occupied by
train */ 


#include <stdio.h>

#define FIRST_CAR_LENGTH 10
#define NORMAL_CAR_LENGTH 8
#define CAR_CAPACITY 4

int main()
{
	
	int first_car_length_pieces, normal_size_car_pieces;
	int total_track_length, max_train_length;
	int total_surplus, total_trains, total_people, total_cars, total_length;
	int index, num_times;
	
	
	// Prompt user to enter the amount of times they want the program to run
	// Read in the value of N
	printf("What is the value for N?\n");
	scanf("%d", &num_times);
	
	// Set for loop to run program N number of times
	for(index=0; index<num_times; index++)
{
	// Prompt user to enter the total length of the track
	// Read in the total length of track
	printf("\n\nWhat is the total length of the track, in feet?\n");
	scanf("%d", &total_track_length);

	// Prompt user to enter the maximum length of the train
	// Read in maximum length of train
	printf("What is the maximum length of a train, in feet?\n");
	scanf("%d", &max_train_length);

	// Calculate the number of normal car length pieces
	normal_size_car_pieces = (max_train_length - 10);
	
	// Calculate the total number of cars
	total_cars = ((normal_size_car_pieces) / (8)) + 1;
 
 	// Calculate the total length of the train
	total_length = (10) + (8)*(total_cars -1);
	
	// Calculate the total number of trains
	total_trains = (1000 * (.25))/(total_length);
	
	// Calculate the total number of people that can fit on the train
	total_people = total_trains * (total_cars * 4);
	
	// Print the total number of people onto screen
	printf("Your ride can have at most %d people on it at one time.\n", 
	total_people);
	
	// Calculate total surplus
	total_surplus = (max_train_length - 10) - (8) * (total_cars - 1);
	
	// Print total surplus to screen
	printf("%d", total_surplus);

	// Check for the case that the maximum length fits exactly, 
	//and edit surplus accordingly
	if (total_surplus == 0) 
	printf("Maximum length fits exactly.\n");
	else 
	printf("Maximum train length has a surplus of %d feet.\n", total_surplus);
}
		
system ("pause");
return 0;	
}


