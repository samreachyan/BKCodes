//Cho N di?m trên m?t ph?ng, hãy tìm m?t c?p di?m v?i kho?ng cách euclid nh? nh?t gi?a chúng. 
//Bi?t r?ng không có hai di?m nào trùng nhau và có duy nh?t m?t c?t có kho?ng cách nh? nh?t.
//
//Input
//Dòng d?u tiên ch?a m?t s? nguyên N (2=N=50000). 
//N dòng ti?p theo m?i dòng ch?a hai s? nguyên là t?a d? X và Y c?a m?t di?m. 
//Giá tr? tuy?t d?i c?a X, Y không vu?t quá 106.
//
//Output
//Ghi ra 3 s? abc, trong dó a,b (a<b) là các ch? s? c?a c?p di?m tìm du?c trong d? li?u vào 
//(ch? s? b?t d?u t? 0) và c là kho?ng cách gi?a chúng. Làm tròn c d?n 6 ch? s? sau d?u ph?y d?ng.
//
//Examples
//input
//5
//0 0
//0 1
//100 45
//2 3
//9 9
//output
//0 1 1.000000
//input
//5
//0 0
//-4 1
//-7 -2
//4 5
//1 1
//output
//0 4 1.414214


#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
 
class Point{
	public:
	float x, y;
};

// vector chua 2 diem co khoang cach nho nhat 
vector<pair<Point, Point> > vector_point;
 
 // Ham dist tinh khoang cach giua 2 diem
double dist(Point p1, Point p2)  
{  
    return  (p1.x - p2.x)*(p1.x - p2.x) +  
                (p1.y - p2.y)*(p1.y - p2.y)  
            ;  
}
 
//Giai thuat BruteForce ap dung cho truong hop n nho 
double bruteForce(Point P[], int n)  
{  
    double min = 1e14;
	Point p1;
	Point p2;  
    for (int i = 0; i < n; i++)  
        for (int j = i+1; j < n; j++)  
            if (dist(P[i], P[j]) < min) {
            	min = dist(P[i], P[j]);
            	p1 = P[i];
            	p2 = P[j];
			} 
    pair<Point, Point> p(p1, p2);
	vector_point.push_back(p);         
    return min;  
}  
 
//comb sort
int getNextGap(int n){
	int gap = n*10/13;
	if(gap < 1)
		return 1;
	return gap;
}

//combSort theo toa do x 
void combSortX(Point M[], int n)
{
	int gap = n;
	bool swaped = true;
	
	while(gap != 1 || swaped == true)
	{
		gap = getNextGap(gap);
		
		swaped = false;
		
		for(int i = 0; i< n - gap; i++){
			if(M[i].x> M[i+gap].x){
				swap(M[i], M[i+gap]);
				swaped = true;
			}
		}
	}
}

//combSort theo toa do y 
void combSortY(Point M[], int n)
{
	int gap = n;
	bool swaped = true;
	
	while(gap != 1 || swaped == true)
	{
		gap = getNextGap(gap);
		
		swaped = false;
		
		for(int i = 0; i< n - gap; i++){
			if(M[i].y> M[i+gap].y){
				swap(M[i], M[i+gap]);
				swaped = true;
			}
		}
	}
} 
 
 
// Ham tinh khoang cach ngan nhat giua 2 diem trong tap strip 
float stripCloset (Point strip[], int size, float d)
{
	Point p1;
	Point p2; 
	int count = 0;
	
	//khoi tao min = d
	float min = d;
	
	// Sap xep mang strip theo toa do y
	combSortY(strip, size);
	for(int i = 0; i< size; i++)
		// Tinh khoang cach cua tung cap diem trong mang strip
		// de tim khoang cach nho nhat giua 2 diem
		for(int j = i+1; j< size && (strip[j].y - strip[i].y) < min; j++)
		{
			if(dist(strip[i], strip[j]) < min){
				min = dist(strip[i], strip[j]);
				p1 = strip[i];
				p2 = strip[j];
				count ++;
			}
		}
	if(count != 0){
		pair<Point, Point> p(p1, p2);
		vector_point.push_back(p);
	}
	return min;
			
}
 
double cloPair(Point M[], int n)
{
	// dieu kien dung de quy
	if(n <= 3)	//neu n<= 3 thi dung giai thuat bruteForce
		return bruteForce(M, n);
	
	// chia day cac diem thanh 2 phan
	int mid = n/2;
	Point midPoint = M[mid];
	
	// De quy tinh 2 day ben trai va ben phai
	float dl = cloPair(M, mid);
	float dr = cloPair(M+mid, n - mid);
	
	// Tinh khoang cach nho nhat giua nua ben trai va nua ben phai
	float d = min(dl, dr);
	
	// Ham strip chua cac diem nam o nua ben trai va nua ben phai 
	//co khoang cach den duong thang vuong goc voi truc hoanh tai midPoint nho hon d
	Point strip[n];
	int j =  0;
	for(int i = 0; i< n; i++)
	{
		if(abs(M[i].x - midPoint.x) < d)
		{
			strip[j] = M[i];
			j++;
		}
	}
	
	// Ket qua la min cua d va khoang cach ngan nhat giua 2 diem trong tap strip
	return min(d, stripCloset(strip, j, d));
} 
 
int main()
{
	int n;
	cin>>n;
	Point M[n];
	Point P[n];
	int i,j;
	for(i = 0; i<n; i++)
	{
		cin >> M[i].x;
		cin >> M[i].y;
	}
	
	for(i = 0; i<n; i++)
	{
		P[i] = M[i];
	}
	
	combSortX(P, n);
	
	double min = cloPair(P, n);
	
	// gia tri nho nhat tim dc
	double result = sqrt(min);
	
	
	int index;
	int index1;		// chi so cua diem thu nhat
	int index2;		// chi so cua diem thu hai
	for(i = 0; i< vector_point.size(); i++)
	{
		// tim cap diem co gia tri min trong vector_point
		if(min == dist(vector_point[i].first, vector_point[i].second))
		{
			index = i;
			break;
		}
	}
	
	int count = 0;
	
	// Tim cap diem co khoang cach nho nhat trong mang ban dau 
	// Vi cac diem la khac nhau tung doi mot va co duy nhat 1 cap co khoang cach nho nhat
	for(i = 0; i< n ; i++)
	{
		if((M[i].x == vector_point[index].first.x && M[i].y == vector_point[index].first.y &&count ==0)|| 
			(M[i].x == vector_point[index].second.x && M[i].y == vector_point[index].second.y && count ==0))
			{
				count ++;
				index1 = i;
				continue;
			}
		if((M[i].x == vector_point[index].first.x && M[i].y == vector_point[index].first.y &&count ==1)|| 
			(M[i].x == vector_point[index].second.x && M[i].y == vector_point[index].second.y && count ==1))
			{
				index2 = i;
				break;
			}
	}
	
	
	printf("%d %d %.6f",index1, index2, result);
	//printf("%.6f", result);
	return 0;
}

