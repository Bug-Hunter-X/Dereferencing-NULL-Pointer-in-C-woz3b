int main() {
  int *ptr = NULL;
  if (ptr != NULL) { 
    *ptr = 10; 
  } else {
    //Handle the NULL pointer case appropriately, such as error message or exiting
    printf("Error: Pointer is NULL\n");
    return 1; //Return non-zero error code
  }
  return 0;
}