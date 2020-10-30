// C++ program to implement multilevel queue scheduling
  
#include <bits/stdc++.h>
using namespace std;
  
struct Process { 
    int pid; // Process ID 
    int bt; // Burst Time 
    int art; // Arrival Time
    int queue; // queue number 
}; 
  
// Function to find the waiting time for all processes 
void findWaitingTime(Process proc[], int n, int wt[]) 
{ 
    int rt[n]; 
  
    // Copy the burst time into rt[] 
    for (int i = 0; i < n; i++) 
        rt[i] = proc[i].bt; 

    int complete = 0, t = 0;
    queue<int> q1,q2;int cur1=0;int cur2=0;
    set<int> s1,s2;int flag1=0;int flag2=0;
    int qt1=4;int qt2=3;
    // Process until all processes gets 
    // completed 
    while (complete != n) { 
  
        // Find process which has arrivied on or before time t so that it can be added to the queue
        for (int j = 0; j < n; j++) { 
            if ((proc[j].art <= t) && rt[j] > 0 && proc[j].queue==1 && s1.find(j)==s1.end()) {
                    s1.insert(j);
                    q1.push(j);
            }else if((proc[j].art <= t) && rt[j] > 0 && proc[j].queue==2 && s2.find(j)==s2.end()){
                    s2.insert(j);
                    q2.push(j);
            }
        }

        if(rt[cur1]!=0 && flag1==1){
            q1.push(cur1);
            flag1=0;
        }
        if(rt[cur2]!=0 && flag2==1){
            q2.push(cur2);
            flag2=0;
        }

        if(!q1.empty()){ //check whether queue 1 is empty
            cur1 = q1.front();
            q1.pop();

            // Reduce remaining time by quantum time or the process is completed
            if(rt[cur1]>=qt1){
                rt[cur1]=rt[cur1]-qt1;
                t+=qt1;
            }else{
                t+=rt[cur1];
                rt[cur1]=0;
            }

            // If a process gets completely 
            // executed 
            if (rt[cur1] == 0) { 
          
                // Increment complete 
                complete++;
          
                // Calculate waiting time 
                wt[cur1] = t - proc[cur1].bt - proc[cur1].art; 
          
                if (wt[cur1] < 0) 
                    wt[cur1] = 0; 
            }
            flag1=1;
        }else if(!q2.empty()){ // check whether queue 2 is empty
            cur2 = q2.front();
            q2.pop();
            int time2=0;
            // Reduce remaining time by 1
            while(time2!=qt2){
                // check whether a new process of queue 1 has arrived
                for (int j = 0; j < n; j++) { 
                    if ((proc[j].art <= t) && rt[j] > 0 && proc[j].queue==1 && s1.find(j)==s1.end()) {
                            s1.insert(j);
                            q1.push(j);
                    }else if((proc[j].art <= t) && rt[j] > 0 && proc[j].queue==2 && s2.find(j)==s2.end()){
                            s2.insert(j);
                            q2.push(j);
                    }
                }

                // if a new process has arrived in q1 then preempt queue 2
                if(!q1.empty()){
                    break;
                }
                t=t+1;
                time2+=1;
                rt[cur2]-=1;

                // If a process gets completely 
                // executed 
                if (rt[cur2] == 0) { 
          
                    // Increment complete 
                    complete++;
          
                    // Calculate waiting time 
                    wt[cur2] = t - proc[cur2].bt - proc[cur2].art; 
          
                    if (wt[cur2] < 0) 
                        wt[cur2] = 0; 
                    break;
                }
                flag2=1;
            }
        }else{
            t++;
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
    int n,q;
    // printf("Enter number of processes: ");
    scanf("%d %d\n",&n,&q);
    struct Process proc[n];
    int i;
    // printf("Enter %d pair of arrival and burst time",n);
    for(i=0;i<n;i++){
        int arrival,burst,queue;
        scanf("%d %d %d",&arrival,&burst,&queue);
        proc[i].pid=i+1;
        proc[i].bt=burst;
        proc[i].art=arrival;
        proc[i].queue=queue;
    }
    sort(proc,proc+n,custSort);
  
    findavgTime(proc, n); 
    return 0; 
}
