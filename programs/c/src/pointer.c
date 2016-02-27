char display(void) {
} 
int main() {
 int i = 50;
 int *p = &i;
 int arr[20];
 int (*pArray)[20] = &arr;
 char display(void);
 char (*ptrFunc)(void) = &display;
 
 arr[0] = 100;

 return 0;
}
