#include <stdlib.h>
#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Graph{
    unordered_map<T, list<pair<T,int> > > m;

public:

    void addEdge(T u,T v,int dist,bool bidir=true){
        m[u].push_back(make_pair(v,dist));
        if(bidir){
            m[v].push_back(make_pair(u,dist));
        }

    }
    void printAdj(){
        //Let try to print the adj list
        //Iterate over all the key value pairs in the map
        for(auto j:m){

            cout<<j.first<<"->";

            //Iterater over the list of cities
            for(auto l: j.second){
                    cout<<"("<<l.first<<","<<l.second<<")";

            }
            cout<<endl;
        }

    }
    void dijsktraSSSP(T src){

        unordered_map<T,int> dist;

        //Set all distance to infinity
        for(auto j:m){
            dist[j.first] = INT_MAX;
        }

        //Make a set to find a out node with the minimum distance
        set<pair<int, T> > s;

        dist[src] = 0;
        s.insert(make_pair(0,src));

        while(!s.empty()){

            //Find the pair at the front.
            auto p =   *(s.begin());
            T node = p.second;

            int nodeDist = p.first;
            s.erase(s.begin());


            //Iterate over neighbours/children of the current node
            for(auto childPair: m[node]){

                if(nodeDist + childPair.second < dist[childPair.first]){


                    //In the set updation of a particular is not possible
                    // we have to remove the old pair, and insert the new pair to simulation updation
                    T dest = childPair.first;
                    auto f = s.find( make_pair(dist[dest],dest));
                    if(f!=s.end()){
                        s.erase(f);
                    }

                    //Insert the new pair
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest],dest));

                }

            }
        }
        //Lets print distance to all other node from src
        for(auto d:dist){

            cout<<"\n"<<d.first<<" is located at distance of  "<<d.second<<" km"<<endl;
        }


    }

};
 int Menu(int area)
    {
    int x;
    cout<<"Enter your place of Origin"<<endl;
    cout<<"\n1. Peshawar"<<endl;
    cout<<"\n2. Charsadda"<<endl;
    cout<<"\n3. Swabi"<<endl;
    cout<<"\n4. Nowshehra"<<endl;
    cout<<"\n5. Kohat"<<endl;
    cout<<"\n6. Swat"<<endl;
    cin>>x;
    return x;
    }


int main(){



    Graph<int> g;
    g.addEdge(1,2,1);
    g.addEdge(1,3,4);
    g.addEdge(2,3,1);
    g.addEdge(3,4,2);
    g.addEdge(1,4,7);
    //g.printAdj();
   // g.dijsktraSSSP(1);
    int origin = Menu(origin);


    Graph<string> kpk;
    kpk.addEdge("Peshawar","Charsadda",21);
    kpk.addEdge("Peshawar","Nowshera",44);
    kpk.addEdge("Nowshera","Charsadda",29);
    kpk.addEdge("Nowshera","Swabi",46);
    kpk.addEdge("Kohat","Swat",256);
    kpk.addEdge("Swabi","Kohat",112);
    kpk.addEdge("Swat","Charsadda",132);
    //kpk.printAdj();


    char yesorno;
    while(yesorno != 'n'){
    switch(origin){
    case 1:
    kpk.dijsktraSSSP("Peshawar");
    break;
    case 2:
    kpk.dijsktraSSSP("Charsadda");
    break;
    case 3:
    kpk.dijsktraSSSP("Swabi");
    break;
    case 4:
    kpk.dijsktraSSSP("Nowshera");
    break;
    case 5:
    kpk.dijsktraSSSP("Kohat");
    break;
    case 6:
    kpk.dijsktraSSSP("Swat");
    break;
    default:
    cout<<"Place not found"<<endl;
    }

    cout<<"\n\nWould you like to change your origin [Y/N]"<<endl;
    cin>>yesorno;
    if (yesorno == 'y'|| yesorno == 'Y'){
        system("CLS");
        origin=Menu(origin);}
    else
        cout<<"Good bye"<<endl;
    }


 return 0;
}
