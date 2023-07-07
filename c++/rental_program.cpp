#include <iostream>
int cost_accounting(int start, int end,int cost);
int main(){
int s_t,e_t;
std::cout<<"\n\t@client enter the starting time '(0 - 23)'\t:";
std::cin>>s_t;
std::cout<<"\n\tAgain @client enter the ending time '(1 - 24)'\t:";
std::cin>>e_t;
if(s_t >= 0 && s_t <= 23 && e_t > 0 && e_t <= 24 && s_t <= e_t)
{
    std::cout<<"\n\tyou will pay\t"<<cost_accounting(s_t,e_t,0)<<"\n\n";
}
else
{
    std::cout<<"\n\tinvalid starting or Ending time take a look about the valid time \n\t where you inputed\n\n"; 
}
return 0;
}
int cost_accounting(int start,int end,int cost)
{
    if(start < 7)
    {
        if(end <= 7)
        {   
            // same as cost = cost +(end-start)*500.
            cost += (end-start)*500; 
            return cost;
        }
        else
        {
        cost += (7-start)*500;
        start = 7; // Handle the case when ending time <= 7
        return cost_accounting(start, end, cost);
        }
    }
    else if (start < 14)
    {
        if(end <= 14)
        {
            // same as cost = cost +(end-start)*1000.
            cost += (end - start)*1000;
            return cost;
        }
        else
        {
            // same as cost = cost +(end-start)*1000.
            cost += (14-start)*1000;
            start = 14; // Handle the case when ending time <= 14
            return cost_accounting( start,end, cost);
        }
        }
    else if (start < 19)
    {
        if (end <= 19)
        {
            cost += (end-start)*1500;
            return cost;
        }
        else
        {
            cost += (19 - start)*1500;
            start = 19;
            return cost_accounting(start,end,cost);
        }
    
        
    }
    else if (start < 24)
    {
        if(end <= 24)
        {
            cost += (end-start)*500;
            return cost;
        }
    }
    else if(start < 21)
    {
        if(end <21)
        {
        cost += (end-start)*500;
        return cost;   
        }
        else
        {
            cost += (end-start)*1000;
            return cost_accounting(start,end,cost);
        }
    }
     // Return the initial cost if no conditions are met
    return cost;
    }
    
   