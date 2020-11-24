/* 
    date: 24-Nov-2020
*/
#include <iostream>
using namespace std;

int n;
int X[100], Y[100]; //# Lưu toạ độ các bước di chuyển của quân mã
int mark[100][100]; //# Đánh dấu vị trí các ô mà quân mã đi qua
//# Mảng hx, hy mô tả 8 vị trí quân mã có thể di chuyển kể từ vị trí hiện tại
const int hx[] = {1, 1, 2, 2, -1, -1, -2, -2}; 
const int hy[] = {2,-2, 1,-1,  2, -2,  1, -1};
//# In ra dãy các di chuyển tìm được
void print_sol(){
    for (int j = 1; j <= n * n; ++j)
        printf("(%d %d)\n", X[j], Y[j]);
    exit(0);
}
int isOk(int n){
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; i++)
			if(!mark[i][j]) return 0;			
	return 1;
}
//# Thuật toán quay lui
void TRY(int k){
    for(int i = 0; i < 8; i++){
        int xx = X[k-1] + hx[i];
        int yy = Y[k-1] + hy[i];
        
        if(!mark[xx][yy] && xx > 0 && yy > 0 && xx <= n && yy <= n){
        	mark[xx][yy] = 1;
        	X[k] = xx;
        	Y[k] = yy;
        	if(k == n*n){
        		print_sol();
			} else {				
				TRY(k+1);
				mark[xx][yy] = 0;
			}        			
		}
        
    }
}
int main(){
    cin >> n;
    mark[1][1] = 1;
    X[1] = Y[1] = 1;
    TRY(2);
   	
    return 0;
}