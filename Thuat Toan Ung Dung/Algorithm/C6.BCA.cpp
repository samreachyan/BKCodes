//At the beginning of the semester, the head of a computer science department D have to assign courses to teachers 
//in a balanced way. The department D has m teachers T={1,2,...,m} and n courses C={1,2,...,n}. 
//Each course c?C has a duration hc. Each teacher t?T has a preference list which is a list of courses 
//he/she can teach depending on his/her specialization. 
//We know a list of pairs of conflicting two courses that cannot be assigned to the same teacher 
//as these courses have been already scheduled in the same slot of the timetable. 
//This conflict information is represented by a conflict matrix A in which A(i,j)=1 indicates that 
//course i and j are conflict.The load of a teacher is the total duration of courses assigned to her/him. 
//How to assign n courses to m teacher such that each course assigned to a teacher is in his/her preference list, 
//no two conflicting courses are assigned to the same teacher, and the maximal load of teachers is minimal.
//
//Input
//Line 1 contains n and m (1=n=20,2=m=5)
//Line 2 contains h1,…,hn
//Line i+2 (i=1,...,n) contains a positive integer k followed by k positive integers which are the teachers who can teach course i.
//Line i+n+2 (i=1,...,n) contains the ith line of the conflict matrix A
//Output
//The output contains a unique number which is the maximal load of the teachers in the solution found and the value -1 if not solution found.
//
//Example
//input
//4 2
//3 7 2 1
//2 1 2
//2 1 2
//2 1 2
//2 1 2
//0 0 0 1
//0 0 0 0
//0 0 0 1
//1 0 1 0
//output
//8

#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int n, m;

// Mang danh dau voi Teach[i][j] = 1 la giao vien i co the day khoa j, = 0 neu nguoc lai
int Teach[20][5];

// duration of course
int Duration[20];

//conflict matrix of two course 
bool Conflict[20][20];

// vector chua ket qua voi Result[i][j] la giao vien i se day khoa j
vector<vector<int> > Results;
 
void input()
{
	int i,j;
	cin >>n >>m;
	
	for( i = 0; i < n; i++)		cin >> Duration[i];
	
	vector<vector<int > > V;
	for(i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		vector<int> v;
		for(j = 0; j<k; j++)
		{
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}
		V.push_back(v);
	}
	
	for(i = 0; i < n; i++){
		int count = 0;
		for(j= 0 ; j< m; j++)
		{
			if(j + 1 == V[i][count] && count < V[i].size()){
				Teach[i][j] = 1;
				count ++;
			}
			else{
				Teach[i][j] = 0;
			}
		}
	}
	
	
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j<m; j++)
//			cout << Teach[i][j]<<" ";
//		cout << endl;
//	}
	
	
	for(i = 0; i < n; i++)
		for(j=0;j<n; j++)
			cin >> Conflict[i][j];
	
}

// Xet xem teacher co the day dc course hay ko 
bool isValid(int teacher, int course)
{
	//neu giao vien i co the day khoa j
	if(Teach[course][teacher] == 1){
		if(Results[teacher].size() == 0)
		{
			return true;
		}
		else{
			for(int i = 0; i < Results[teacher].size(); i++)
			{
				int course_before = Results[teacher][i];
				// Xet xem course co trung voi course truoc do da xo trong Result hay ko
				if(Conflict[course_before][course] == 1 || course_before == course)
					return false;
			}
		}
		return true;
	}
	else
		return false;
 
}
 
int maxSumOfTeacher()
{
	int i,j;
	int maxSum = 0;
	for(i  = 0; i<Results.size(); i++)
	{
		int sum = 0; 
		for(j = 0; j < Results[i].size(); j++)
		{
			sum+= Duration[Results[i][j]] ;
		}
		maxSum = max(sum, maxSum);
	}
	return maxSum;
}
 
void BCA(int count, int &ans)
{
	int i,j;
	if(count == n)
	{
		ans = min(ans, maxSumOfTeacher());
//		
//		for(i  = 0; i<Results.size(); i++)
//		{
//			for(j = 0; j < Results[i].size(); j++)
//			{
//				cout << Results[i][j] + 1 << " " ;
//			}
//			cout << endl;
//		}
//		cout << maxSumOfTeacher()<<endl;
//		cout << endl;
		return;
	}
	for(i = count; i < n; i++)
	{
		// bien tmp de danh dau khi nao  tmp >= m thi break
		int tmp = 0;
		for(j = 0; j < m; j++)
		{
			if(isValid(j, i)){
				if(j == m - 1)
					tmp = m;
				Results[j].push_back(i);
				count ++;
				
				int sum = maxSumOfTeacher();
				BCA(count, ans);
				Results[j].pop_back();
				tmp ++;
				count --;
				
			}
			else{
				tmp ++;
			}
		}
		if(tmp >= m)
			break;
	}	
	
}
 
 
int main()
{
	input();
	int i,j;
	for(i = 0; i<m; i++)
	{
		vector<int> v;
		Results.push_back(v);	
	}		
	
	int ans = 999999;
	BCA(0, ans);
	if(ans == 999999)
		ans = -1;
	cout << ans;
	
	return 0;
}

