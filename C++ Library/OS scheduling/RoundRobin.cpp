// C++ program to implement Round Robin
  
#include <bits/stdc++.h>
using namespace std;
  
struct Process { 
    int pid; // Process ID 
    int bt; // Burst Time 
    int art; // Arrival Time 
}; 
  
// Function to find the waiting time for all processes 
void findWaitingTime(Process proc[], int n, int wt[], int qt) 
{ 
    int rt[n]; 
  
    // Copy the burst time into rt[] 
    for (int i = 0; i < n; i++) 
        rt[i] = proc[i].bt; 

    // for (int i = 0; i < n; i++) 
    // cout<<"i "<<i<<" pid "<<proc[i].pid<<" bt "<<proc[i].bt<<" art "<<proc[i].art<<endl; 

    int complete = 0, t = 0;
    queue<int> q;int cur=0;
    int arr[n]={0};int flag=0;
    // Process until all processes gets 
    // completed 
    while (complete != n) { 
  
        // Find process which has arrivied on or before time t so that it can be added to the queue
        for (int j = 0; j < n; j++) { 
            if ((proc[j].art <= t) && rt[j] > 0 && arr[j]==0) {
                arr[j]=1;
                q.push(j);
            } 
        }
        if(rt[cur]!=0 && flag==1){
            q.push(cur);
        }
  
        if (q.empty()) { 
            t++; 
            continue; 
        }
        cur = q.front();
        q.pop();

        // Reduce remaining time by quantum time or the process is completed
        if(rt[cur]>=qt){
            rt[cur]=rt[cur]-qt;
            t+=qt;
        }else{
            t+=rt[cur];
            rt[cur]=0;
        }
        //cout<<"cur "<<cur<<" rt "<<rt[cur]<<endl;

        // If a process gets completely 
        // executed 
        if (rt[cur] == 0) { 
  
            // Increment complete 
            complete++;
  
            // Calculate waiting time 
            wt[cur] = t - proc[cur].bt - proc[cur].art; 
  
            if (wt[cur] < 0) 
                wt[cur] = 0; 
        }
        flag=1;
    } 
} 
  
// Function to calculate turn around time 
void findTurnAroundTime(Process proc[], int n, 
                        int wt[], int tat[]) 
{ 
    // calculating turnaround time by adding 
    // bt[i] + wt[i] 
    for (int i = 0; i < n; i++) 
        tat[i] = proc[i].bt + wt[i]; 
} 
  
// Function to calculate average time 
void findavgTime(Process proc[], int n, int qt) 
{ 
    int wt[n], tat[n], total_wt = 0, total_tat = 0; 
  
    // Function to find waiting time of all processes 
    findWaitingTime(proc, n, wt, qt); 
  
    // Function to find turn around time for all processes 
    findTurnAroundTime(proc, n, wt, tat); 
  	
  	map<int,int> m;
    // Calculate total waiting time and total turnaround time 
    for (int i = 0; i < n; i++) { 
        total_wt = total_wt + wt[i]; 
        total_tat = total_tat + tat[i];
        //cout<<"Process id "<<proc[i].pid<<" completion time "<<tat[i]+proc[i].art<<endl;
        m.insert({tat[i]+proc[i].art,proc[i].pid});
    } 
  	
    cout<<endl;
    cout << fixed << setprecision(2) << (float)total_wt / (float)n <<" "; 
    cout << fixed << setprecision(2) << (float)total_tat / (float)n <<endl;
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
    	cout<<"P"<<it->second<<" ";
    }
    cout<<endl;
} 

bool custSort(Process P1,Process P2){
	return P1.art<P2.art;
}

// Driver code 
int main() 
{ 
    int n,qt;
    // printf("Enter number of processes: ");
    scanf("%d %d\n",&n,&qt);
    struct Process proc[n];
    int i;
    // printf("Enter %d pair of arrival and burst time",n);
    for(i=0;i<n;i++){
        int arrival,burst;
        scanf("%d %d",&arrival,&burst);
        proc[i].pid=i+1;
        proc[i].bt=burst;
        proc[i].art=arrival;
    }
    sort(proc,proc+n,custSort);
  
    findavgTime(proc, n, qt); 
    return 0; 
}
