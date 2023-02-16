// Create a simple structure of your choice. Mine will have a single member, an int called integer. 
// Do not create an instances of the struct yet. Declare a pointer variable that points to your struct. 
// This pointer doesn't actually point to anything yet because there are no instances of the first struct. 
// Create an instance of the struct. Now initialize your pointer to point to the struct instance.
// Finally, assign values to the integer member of your original struct in three ways:
//assign a value by using standard dot-notation for your instance and then print the value
//assign a value by using standard dot-notation for the pointer initialized to the instance and then print the value
//assign a value by using the->indirect membership operator between the pointer name and the structure member & then print the value
#include <stdio.h>

struct something
{
    int integer;
};

int main()
{
    struct something *ptr;
    struct something test;

    ptr = &test;

    test.integer = 3;
    printf("%d\n", test.integer);

    (*ptr).integer = 6;
    printf("%d\n", test.integer);
    
    ptr->integer = 9;
    printf("%d\n", test.integer);
    
    return 0;
}