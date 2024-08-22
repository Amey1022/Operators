//program to find coordinates (x,y) in which quadrant
int main()
{
    int x,y;
    cout<<"Enter coordinate of x:";                                  
    cin>>x;                                                                 //accepting value of x coordinate
    cout<<"Enter coordinate of y:";
    cin>>y;                                                                 //accepting value of y coordinate    
    if (x>0 && y>0)                                                         // condition for first quadrant
    {
        cout<<"Coordinates in first quadrant!";
    }
    else if (x<0 && y<0)                                                    //condition for third quadrant
    {
        cout<<"Coordinates in third quadrant!";
    }
    else if(x>0 && y<0)                                                     //condition for fourth quadrant 
    {
        cout<< "Coordinates in fourth quadrant!";
    }
    else if(x<0 && y>0)                                                     // condition for second quadrant
    {
        cout<<"Coordinates are in second quadrant!";
    }
    else if(x==0 && y==0)
    {
        cout<<"Origin!";
    }
    

}
/* OUTPUT
Enter coordinate of x:5
Enter coordinate of y:10
Coordinates in first quadrant!
*/
