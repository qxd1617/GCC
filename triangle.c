/// 
/// File: triangle.c 
/// 
/// A program to print out multiple "pyramid" triangles of the form:
/// <pre>
///   *
///  ***
/// *****
/// </pre>
/// 
/// @author Quan Dong_
/// 
// // // // // // // // // // // // // // // // // // // // // // // // 

// TODO_ADD_#INCLUDES_ HERE
#include <stdio.h>
#include <stdlib.h>
/**
 *  Function: drawTriangle
 *
 *  Description: Draw a 'pyramid' triangle whose base width is 'size'.
 *  Note: If size is even, the function makes a 'size + 1' pyramid triangle. 
 * 
 *  @param size  the width of the base of the triangle to draw
 */
void triangle(int size){
	if (size%2 == 0){
		size = size + 1;
	}	
	int totalSpaces = size/2;
	int totalAst = 1;
	int spaceCount;
	int astCount;
	while (!(totalAst > size)){
		for(spaceCount = totalSpaces; spaceCount > 0; spaceCount = spaceCount - 1 ){
			printf(" ");
		}
		for (astCount = totalAst; astCount > 0; astCount = astCount - 1){
			printf("*");
		}
		for (spaceCount = totalSpaces; spaceCount > 0; spaceCount = spaceCount - 1){
			printf(" ");
		}
		totalSpaces = totalSpaces - 1;
		totalAst = totalAst + 2;
		printf("\n");
	}
	printf("\n");
}

/**
 *  Function: main 
 *
 *  Description: draws pyramid triangles of size 1, 5, and '6'.
 *
 *  @returns errorCode  error Code; EXIT_SUCCESS if no error
 */
// TODO_WRITE_MAIN_FUNCTION HERE
int main(){
	printf("\n");
	triangle(1);
	triangle(5);
	triangle(6);

	return EXIT_SUCCESS;
}
