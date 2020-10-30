// C++ program to implement non preemptive priority
  
#include <bits/stdc++.h>
using namespace std;
  
struct Process { 
    int pid; // Process ID 
    int bt; // Burst Time 
    int art; // Arrival Time 
    int priority; // priority
}; 
  
// Function to find the waiting time for all processes 
void findWaitingTime(Process proc[], int n, int wt[]) 
{ 
    int rt[n]; 
  
    // Copy the burst time into rt[] 
    for (int i = 0; i < n; i++) 
        rt[i] = proc[i].bt;

    int complete = 0, t = 0;int pri=INT_MAX;
    int highPriority; bool check=false;
    // Process until all processes gets 
    // completed 
    while (complete != n) { 
        pri=INT_MAX;check=false;
        // Find process which has arrivied on or before time t so that it can be added to the queue
        for (int j = 0; j < n; j++) { 
            if ((proc[j].art <= t) && rt[j] > 0 && (proc[j].priority <= pri)) {
                //cout<<"j "<<j<<endl;
                if(proc[j].priority == pri){
                    if(proc[j].pid <= proc[highPriority].pid){
                        highPriority=j;
                    }
                }else{
                    pri=proc[j].priority;
                    highPriority=j;
                }
                check=true;
            } 
        }
        //cout<<"highPriority "<<highPriority<<endl;
        if (check==false) { 
            t++; 
            continue; 
        }
        // Reduce remaining time by burst time as it is non preemtive process
        t+=rt[highPriority];
        rt[highPriority]=0;

        // If a process gets completely 
        // executed 
        if (rt[highPriority] == 0) { 
        //cout<<"highPriority "<<highPriority<<" time "<<t<<endl;
            // Increment complete 
            complete++;
  
            // Calculate waiting time 
            wt[highPriority] = t - proc[highPriority].bt - proc[highPriority].art; 
  
            if (wt[highPriority] < 0) 
                wt[highPriority] = 0; 
        }
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
void findavgTime(Process proc[], int n) 
{ 
    int wt[n], tat[n], total_wt = 0, total_tat = 0; 
  
    // Function to find waiting time of all processes 
    findWaitingTime(proc, n, wt); 
  
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
    int n;
    // printf("Enter number of processes: ");
    scanf("%d\n",&n);
    struct Process proc[n];
    int i;
    // printf("Enter %d pair of arrival and burst time",n);
    for(i=0;i<n;i++){
        int arrival,burst,priority;
        scanf("%d %d %d",&arrival,&burst,&priority);
        proc[i].pid=i+1;
        proc[i].bt=burst;
        proc[i].art=arrival;
        proc[i].priority=priority;
    }
    sort(proc,proc+n,custSort);
  
    findavgTime(proc, n); 
    return 0; 
}
