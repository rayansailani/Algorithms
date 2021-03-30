#include <iostream>
using namespace std;

class Dijkstra {
	int n, cost[10][10], d[10], p[10], v[10];
	// here cost is the adjacency matrix of costs
	// d is the distance matrix and d[i] indicates the distance from the source to the ith vertex
	//path is the path matrix which determinest the path from the src to the ith node 
	// v is the visited matrix
public:
	void readData();
	void shortestPath(int src);
	void display(int src);

};

void Dijkstra::readData() {
	int i, j;
	cout << "Enter the number of vertices" << endl;
	cin >> n;
	cout << "Enter the cost matrix" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> cost[i][j];
}
void Dijkstra::shortestPath(int src) {
	int i, j, u, min, s;
	//initially assigning the direct distances from the src to the ith node
	for (i = 0; i < n; i++) {
		d[i] = cost[src][i];
		v[i] = 0;
		p[i] = src;
	}
	v[src] = 1;//the src node is visited

	// select the minimum cost vertex (interms of travelling costs) 
	for (i = 0; i < n; i++) {
		min = 99;
		u = 0;
		for (j = 0; j < n; j++) {
			if (!v[j]) {
				if (d[j] < min) {
					min = d[j];
					u = j;
				}
			}
		}
		v[u] = 1;
		for (s = 0; s < n; s++) {
			if ( v[s]==0  && (d[s] > d[u] + cost[u][s])) {
				d[s] = d[u] + cost[u][s];
				p[s] = u;
			}
		}
	}
	cout << "The path matrix is : " << endl;
	for (int i = 0; i < n; i++)
		cout << p[i] << " "<< d[i];
	cout << endl;
}

void Dijkstra::display(int src) {
	
		
	int i, k;
	for (i = 0; i < n; i++) {
		if (i == src) {
			continue;
		}
		else {
			cout << "The shortest path from " << src << " to " << i << " is:  " << endl;
			k = i;
			cout << k << " <---";
			while (p[k] != src) {
				cout<<p[k]<< " <---";
				k = p[k];
			}
			cout << "and the distance is " << d[i] << endl;
		}
	}
}

int main() {
	Dijkstra d;
	d.readData();
	int src;
	cout << "Enter the source" << endl;
	cin >> src;
	d.shortestPath(src);
	d.display(src);
	return 0;
}
//sample input 
0 1 3 99 99 99
1 0 99 5 2 99
3 99 0 99 2 99
99 5 4 0 99 6
99 2 2 99 0 1
99 99 99 6 1 0
