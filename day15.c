#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


//-------------------------------program 1-----------------------------------------
//to get the stock of sensor inventory using structure pointer

struct inventory
{
    int temp;
    int hum;
    int ac_meter;
    int gyro;

};

int inventory_main()
{
    struct inventory str1,*ptr=&str1;

    printf("Enter the number of temperature sensors:");
    scanf("%d",&(*ptr).temp);
    printf("Enter the number of humidity sensors:");
    scanf("%d",&(*ptr).hum);
    printf("Enter the number of accelerometer sensors:");
    scanf("%d",&(*ptr).ac_meter);
    printf("Enter the number of gyrometer sensors:");
    scanf("%d",&(*ptr).gyro);

    printf("\n -----sensors stock-----\n");
    printf("temperature:%d\n",(*ptr).temp);
    printf("humidity:%d\n",(*ptr).hum);
    printf("accelerometer:%d\n",(*ptr).ac_meter);
    printf("gyroscope:%d\n",(*ptr).gyro);
}

//----------------------------program 2-------------------------------------------
//collision detection


// struct sensors
// {
//     int vibration;
//     int ac_meter;
//     int gyro;
//     int ac_meter_change;
// }val={0,0,0,0},*ptr;

// void get_data();
// int collision_check();

// int collision_main()
// {
//     int collision=0;
//     // val={0,150,10,0};

//     while(!collision)
//     {
//         printf("Safe\n");
//         get_data();
//         collision=collision_check();
//     }
//     printf("Collition");
// }

// int collision_check()
// {
//     ptr=&val;
//     if((*ptr).vibration > 20 || (*ptr).ac_meter_change>50 || (*ptr).gyro > 15)
//         return(1);
//     else 
//         return(0);
// }

// void get_data()
// {
//     ptr=&val;
//     (*ptr).ac_meter_change=(*ptr).ac_meter;
//     printf("Enter the vibration:");
//     scanf("%d",&(*ptr).vibration);
//     printf("Enter the Accelerometer reading:");
//     scanf("%d",&(*ptr).ac_meter);
//     printf("Enter the gyro reading:");
//     scanf("%d",&(*ptr).gyro);
//     (*ptr).ac_meter_change-=(*ptr).ac_meter;
// }



//------------------------------------program 3----------------------------------------
// to deploy airbags when collision happens
// struct sensors
// {
//     int vibration;
//     int ac_meter;
//     int gyro;
//     int ac_meter_change;
//     int ignition;
//     struct presssure
//     {
//         int f_seat1;
//         int f_seat2;
//         int r_seat1;
//         int r_seat2;
//     }seat_p;
//     struct belt
//     {
//         int f_seat1;
//         int f_seat2;
//         int r_seat1;
//         int r_seat2;
//     }seat_b;
//     struct airbag
//     {
//         int f_seat1;
//         int f_seat2;
//         int r_seat1;
//         int r_seat2;
//     }air_bag;
// }val={0,0,0,0,1},*ptr;

// void get_data();
// int collision_check();
// void airbag_deploy();


// int air_bag_main()
// {
//     int collision=0;
//     ptr=&val;
//     // val={0,150,10,0};
//     while((*ptr).ignition)
//     {
//         while(!collision)
//         {
//             printf("Safe\n");
//             get_data();
//             collision=collision_check();

//         }
        
//         printf("Collition!!\n");
//         airbag_deploy();
        
//     }
// }

// //to deploy airbag
// void airbag_deploy()
// {
//     ptr=&val;
//     printf("airbag deployed\n");
//     printf("front seat1=%d\n",(*ptr).air_bag.f_seat1);
//     printf("front seat2=%d\n",(*ptr).air_bag.f_seat2);
//     printf("rear seat1=%d\n",(*ptr).air_bag.r_seat1);
//     printf("rear seat2=%d\n",(*ptr).air_bag.r_seat2);    
//     (*ptr).ignition=0;
// }

//to check if the collision is occured or not

// int collision_check()
// {
//     ptr=&val;
//     if((*ptr).vibration > 20 || (*ptr).ac_meter_change>50 || (*ptr).gyro > 15)
//         return(1);
//     else 
//         return(0);
// }

// //to get the values from the sensors
// void get_data()
// {
//     ptr=&val;
//     (*ptr).ac_meter_change=(*ptr).ac_meter;
//     printf("Enter the ignition value:");
//     scanf("%d",&(*ptr).ignition);
//     printf("Enter the vibration:");
//     scanf("%d",&(*ptr).vibration);
//     printf("Enter the Accelerometer reading:");
//     scanf("%d",&(*ptr).ac_meter);
//     printf("Enter the gyro reading:");
//     scanf("%d",&(*ptr).gyro);
//     printf("Enter the pressure and seat belt in front seat 1:");
//     scanf("%d",&(*ptr).seat_p.f_seat1);
//     scanf("%d",&(*ptr).seat_b.f_seat1);
//     if((*ptr).seat_p.f_seat1 && (*ptr).seat_b.f_seat1)
//         (*ptr).air_bag.f_seat1=1;
//     else
//         (*ptr).air_bag.f_seat1=0;
//     printf("Enter the pressure and seat belt in front seat 2:");
//     scanf("%d",&(*ptr).seat_p.f_seat2);
//     scanf("%d",&(*ptr).seat_b.f_seat2);
//     if((*ptr).seat_p.f_seat2 && (*ptr).seat_b.f_seat2)
//         (*ptr).air_bag.f_seat2=1;
//     else
//         (*ptr).air_bag.f_seat2=0;
//     printf("Enter the pressure and seat belt in rear seat 1:");
//     scanf("%d",&(*ptr).seat_p.r_seat1);
//     scanf("%d",&(*ptr).seat_b.r_seat1);
//     if((*ptr).seat_p.r_seat1 && (*ptr).seat_b.r_seat1)
//         (*ptr).air_bag.r_seat1=1;
//     else
//         (*ptr).air_bag.r_seat1=0;
//     printf("Enter the pressure and seat belt in front seat 2:");
//     scanf("%d",&(*ptr).seat_p.r_seat2);
//     scanf("%d",&(*ptr).seat_b.r_seat2);
//     if((*ptr).seat_p.r_seat2 && (*ptr).seat_b.r_seat2)
//         (*ptr).air_bag.r_seat2=1;
//     else
//         (*ptr).air_bag.r_seat2=0;
//     (*ptr).ac_meter_change-=(*ptr).ac_meter;
// }

//-----------------------------------program 4-------------------------------------

struct ADAS
{
    int ir_front;
    int ir_left;
    int ir_right;
    int ir_back;
    int driver_cam;
    int ignition;
    int speed;
}val={.ignition=1};

void get_data();
void acc();
void cta();
void driver_mon();
void parking_assist();
void get_parking_data();
void print_details();
int flag=0;

int main()
{   
    char park_choice='n';
    while (val.ignition)
    {

        get_data();
        driver_mon();
        if(val.ignition==0)
            break;

        printf("Do you need parking assistance:");
        scanf(" %c",&park_choice);
        while(park_choice=='y')
        {
            parking_assist();
            park_choice='n';
        }
        printf("ignition=");
        scanf("%d",&val.ignition);
        if(val.speed<0)
            val.speed=0;
        print_details();
        
    }
    
}

// to print current ADAS details
void print_details()
{

    printf("\n------current ADAS details------\n\n");
    printf("Safe drive\n");
    printf("the speed of the vehicle:");
    printf("%d\n",val.speed);
    printf("the ir sensor value at front(m):");
    printf("%d\n",val.ir_front);
    // printf("Enter the ir sensor value at back:");
    // scanf("%d",&val.ir_back);
    printf("the ir sensor value at left(cm):");
    printf("%d\n",val.ir_left);
    printf("the ir sensor value at right(cm):");
    printf("%d\n",val.ir_right);
    printf("Enter the value of passenger cam:");
    printf("%d\n\n\n",val.driver_cam);
}

// function for assisting with parking
void parking_assist()
{
    
    while(val.ignition)
    {
        
        get_parking_data();
        if(val.ir_front<10)
        {
            printf("Front alert!\n");
        }
        if(val.ir_back<10)
        {
            printf("back alert!\n");
        }
        if(val.ir_left<10)
        {
            printf("left alert!\n");
        }
        if(val.ir_right<10)
        {
            printf("right alert!\n");
        }
        printf("ignition=");
        scanf("%d",&val.ignition);
    }

}

//for getting the data needed for parking
void get_parking_data()
{
    printf("Enter the ir sensor value at front(cm):");
    scanf("%d",&val.ir_front);
    printf("Enter the ir sensor value at back(cm):");
    scanf("%d",&val.ir_back);
    printf("Enter the ir sensor value at left(cm):");
    scanf("%d",&val.ir_left);
    printf("Enter the ir sensor value at right(cm):");
    scanf("%d",&val.ir_right);
}

// for monitoring the driver
void driver_mon()
{
    int count=0;
    while(val.driver_cam)
    {
        printf("alert!!\n");
        printf("Enter the value of driver cam:");
        scanf("%d",&val.driver_cam);
        if(count==5)
        {
            printf("speed decreasing stopping\n");
            val.speed=0;
            val.ignition=0;
            break;

        }
        count++;
    }
}

//for checking the distance with vehicles in the front
void acc()
{
    while(val.ir_front < val.speed/10)
    {
        printf("vehicle at front decreasing speed\n");
        val.speed-=val.speed/10;
        printf("Enter the ir sensor value at front(m):");
        scanf("%d",&val.ir_front);
        
    }
}


//for checking the distance with vehicles in the left and right
void cta()
{   
    int temp;
    while(!(val.ir_left>=5 && val.ir_right>=5))
    {
        if(val.ir_left <5 && val.ir_right <5)
        {
            printf("vehicle coming from both sides, so speed decreasing\n");
            val.speed-=10;;
            val.ir_left+=15;
            val.ir_right+=15;
        }
        else if(val.ir_left <5)
        {
            printf("vehicle coming from left turning right\n");
            temp=val.ir_right-5;
            if(temp==0)
            {
                val.ir_left=0;
                val.ir_right=0;
            }
            val.ir_left+=temp;
            val.ir_right-=temp;
        }
        else if(val.ir_right <5)
        {
            printf("vehicle coming from right turning left\n");
            temp=val.ir_right-5;
            if(temp==0)
            {
                val.ir_left=0;
                val.ir_right=0;
            }
            val.ir_right+=temp;
            val.ir_left-=temp;
        }
        if(val.ir_left<0)
            val.ir_left=0;
        
        if(val.ir_right<0)
            val.ir_right=0;
    }
}

//for getting data for ADAS

void get_data()
{
    printf("Enter the speed of the vehicle(km/h):");
    scanf("%d",&val.speed);
    printf("Enter the ir sensor value at front(m):");
    scanf("%d",&val.ir_front);
    acc();
    // printf("Enter the ir sensor value at back:");
    // scanf("%d",&val.ir_back);
    printf("Enter the ir sensor value at left(cm):");
    scanf("%d",&val.ir_left);
    printf("Enter the ir sensor value at right(cm):");
    scanf("%d",&val.ir_right);
    cta();
    printf("Enter the value of passenger cam(0/1):");
    scanf("%d",&val.driver_cam);
}