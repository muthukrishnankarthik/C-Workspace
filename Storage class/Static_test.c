

 


int* fun()
{
     int add =10;
     return (&add);
}

 

int main()
{
    int *ptr = fun();
    printf("value =%d\n",*ptr);
    
}