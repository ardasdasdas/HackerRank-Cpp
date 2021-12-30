#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop{
    int start_time, duration, end_time;
};
struct Available_Workshops{
    unsigned int n;
    Workshop* workshops;
    Available_Workshops(const unsigned int n, Workshop* workshops){
        this->n = n;
        this->workshops = workshops;
    }
};

Available_Workshops* initialize(int* start_time, int* duration, const unsigned int n){
     Workshop* workshops = new Workshop[n];
    for(unsigned int i=0;i<n;i++){
        workshops[i].start_time = start_time[i];
        workshops[i].duration = duration[i];
        workshops[i].end_time = start_time[i] + duration[i];
    }
    Available_Workshops* aW = new Available_Workshops(n, workshops);
    return aW;
}
bool operator<(Workshop w1, Workshop w2){
    return w1.end_time < w2.end_time; 
}
int CalculateMaxWorkshops(Available_Workshops* aW){
    unsigned int numberOfWorkshops = 1;
    Workshop* workshops = aW->workshops;
    sort(workshops, workshops + aW->n);
    Workshop prev = workshops[0];
    for (int itr=1 ; itr<aW->n; itr++)                                           
    {                                                                            
        Workshop current = workshops[itr];                                           
        if (current.start_time >= prev.end_time)                                         
        {                                                                          
            numberOfWorkshops++;                                                         
            prev = current;                                                          
        }                                                                          
  }                                                                            
    return numberOfWorkshops;
}

int main(int argc, char *argv[]) {