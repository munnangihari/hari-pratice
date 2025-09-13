#include <stdio.h>
int gcd(int a, int b) 
{
    while (b != 0) {
        int temp = b;
	b = a % b;
	a = temp;
    }
    return a;
}
int findLCM(int arr[], int n)
{
	int lcm = arr[0];
	for(int i = 1; i < n; i++)
	{
		lcm = (lcm * arr[i]) / gcd(lcm, arr[i]);
	}
	return lcm;
}
int main() {
    int arr[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int lcm = findLCM(arr, n);
    printf("LCM of array elements = %d\n", lcm);
    return 0;
}

