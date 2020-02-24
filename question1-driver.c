#include <stdio.h>
#include <stdlib.h>
#define LEN 20
void setAt(int an_array[], int arrLen, int idx, int val) {
  // complete the function body
}

int *subArrPointer(const int an_array[], int arrLen, int idx, int siz) {
  // complete the function body
}

int* insert(int an_array[], int arrLen, int pos, int val) {
  // complete the function body
}

int erase(int an_array[], int arrLen, int pos) {
  // complete the function body
}

int main() {
  int index;
  int size;
  int value;
  int array[LEN]={0};

  for (int i = 0; i < LEN; i++) {
    array[i]=i;
	}
  printf("Original array: ");
  // call the print function to print the original array here
  printf("SET-AT\n");
  printf("Enter index and value to set at index: ");
  checkInput(scanf("%d",&index));
  checkInput(scanf("%d",&value));
  // call the setAt function here to set the 'value' at 'index'
  // call the print function to print the updated array here
  printf("SUB-ARRAY\n");
  printf("Enter starting index and size of sub-array: ");
  checkInput(scanf("%d",&index));
  checkInput(scanf("%d",&size));
  // call the subArrPointer function here
  // call the print function to print the sub-array returned by the subArrPointer function
  printf("INSERTION\n");
  printf("Enter index and value to insert at index: ");
  checkInput(scanf("%d",&index));
  checkInput(scanf("%d",value));
  // call the insert function here to insert 'value' at 'index'
  // call the print function to print the array returned by the insert function
  printf("DELETION\n");
  printf("Enter index to delete: ");
  checkInput(scanf("%d",&index));
  // call the erase function here to erase the value at 'index'
  // call the print function to print the array after the deletion
  return 0;
}
