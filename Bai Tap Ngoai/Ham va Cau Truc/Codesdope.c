// print cube of 3 number equal of the old number

#include <stdio.h>
#include <string.h>
// int main()
// {
//   int i;
//   for(i=100;i<=500;i++)
//   {
//       int sum = 0;
//       int t = i;
//       while(t!=0)
//       {
//         sum = sum+((t%10)*(t%10)*(t%10));
//         t = t/10;
//       }
//       if(sum==i)
//       {
//         printf("%d\n",i);
//       }
//   }
//   return 0;
// }


// check prime number.


// int main()
// {
//     int x,i,j;

//     printf("Enter the number : ");
//     scanf("%d",&x);

//     printf("Prime factors of %d are:\n",x);

//     for(i=2;i<=x;i++){
//       //checking for factor
//       if(x%i==0){
//         //checking if i is prime or not
//         int p = 0;
//         for(j=2;j<i;j++){
//           if(i%j==0){
//             //i is not prime
//             p++;
//             break;
//           }
//         }
//         if(p==0){
//           //if p is 0
//           //then i is prime
//           printf("%d\n",i);
//         }
//       }
//     }
//   return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int a,b,c;
// 	a=85;
// 	b=a++;
// 	c = a++ + ++b - 1; 
// 	printf("a = %d b = %d c = %d ", a,b,c); // ket qua la 87 86 171
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int a=85, c=2;
// 	float b = 2;
// 	int d = 3;
// 	d = (int)b++/c%5;
// 	printf("d = %d ", d );
// 	return 0;
// }

// Bai 9 giua ky TIN HOC DAI CUONG 

int main(int argc, char const *argv[])
{
	char sinh[10];
	int i, sum=0;
	printf("Nhap vao ngay thang nam sinh (dd/mm/yy) : ");
	scanf("%s", sinh);

	for (i=0 ; i<=10 ; i++){
		if (sinh[i] >= '0' && sinh[i] <= '9'){
			sum += (sinh[i]-'0');
		}
	}
	printf("Ket qua la %d ", sum );
	return 0;
}



// Bai 10 giua ky TIN HOC DAI CUON

// int main() {
	
//    char text[1000], blank[1000];
//    int c = 0, d = 0;
 
//    printf("Enter some text : ");
//    scanf("%s", text);
 
//    while (text[c] != '\0') {
//       if (text[c] == ' ') {
//          int temp = c + 1;
//          if (text[temp] != '\0') {
//             while (text[temp] == ' ' && text[temp] != '\0') {
//                if (text[temp] == ' ') {
//                   c++;
//                }  
//                temp++;
//             }
//          }
//       }
//       blank[d] = text[c];
//       c++;
//       d++;
//    }
 
//    blank[d] = '\0';
 
//    printf("Text after removing blanks\n%s\n", blank);
// }