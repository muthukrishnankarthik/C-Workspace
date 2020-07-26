     #include<stdio.h>
    /* Apply the constructor attribute to startupfun() so that it is executed before main() */
    void startupfun (void) __attribute__ ((constructor));

    /* Apply the destructor attribute to cleanupfun() so that it is executed after main() */
    void cleanupfun (void) __attribute__ ((destructor));

    void startupfun (void)
    {    printf ("Startup method before main()\n");   }

    void cleanupfun (void)
    {    printf ("Cleanup method after main()\n");    }

    int main (void)
    {
        printf ("Hi! Check This Out.\n");
        return 0;
    }