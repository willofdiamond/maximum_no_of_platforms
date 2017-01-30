#include<stdio.h>

static int findMinPlatforms(int arrivals[], int departures[], int bus){
        int no_of_platforms=0,i,arrival_i,departure_i,max_platform=0;
        
        arrival_i=0;
        departure_i=0;
        for(i=0;((arrival_i<bus)&& (departure_i<bus));i++){
            
            
            //if(i>0){
                 if ((arrivals[arrival_i]<departures[departure_i])){
                 no_of_platforms=no_of_platforms+1;
                 if(no_of_platforms>max_platform){
					 max_platform=no_of_platforms;
				 }
                     //printf("i in  array is %d\n",i);
                    // printf("no of gates %d\n",no_of_platforms);
                    // printf("least value for %d ind is %d and bus is %d\n",arrival_i,arrivals[arrival_i],bus);
                    // printf("arrival bool %d\n",(arrival_i<bus)&& (departure_i<bus));
                     if(arrival_i<bus){
                     arrival_i+=1;
				     }
				    // printf("least value for %d ind is %d and bus is %d\n",arrival_i,arrivals[arrival_i],bus);
                 }
                 if(arrivals[arrival_i]>departures[departure_i]){
					  
                      no_of_platforms=no_of_platforms-1;
                      if(no_of_platforms>max_platform){
					 max_platform=no_of_platforms;
				 }
                    //  printf("i in  departure is %d\n",i);
                   //  printf("no of gates %d\n",no_of_platforms);
                   //  printf("least value  %d ind is %d\n",departure_i,departures[departure_i]);
                   //  printf("departure_i bool %d\n",(arrival_i<bus)&& (departure_i<bus));
                     if(departure_i<bus){
                     departure_i+=1;
			    	 }
			    	 
                 //  printf("least value  %d ind is %d\n",departure_i,departures[departure_i]);
                 }
                 // printf("outside  bool %d and %d\n",(arrival_i<bus), (departure_i<bus));
          //  }
            
           
              
            
        } 

       return max_platform;
    }
    
int main (void){
	int arrivals[]={800,840,850,1000,1400,1700};
	int departures[]={810,1100,1020,1030,1800,1900};
	int bus=6;
	printf("Maximum number of platforms is  %d\n",findMinPlatforms(arrivals,departures,bus));
	return 0;
}


//answer Maximum number of platforms is 3

 
