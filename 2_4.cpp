#include<stdio.h>

class time
{
    int hr;
    int min;
    int sec;

    public:

        time()  
            {
                printf("\n-------time()-------\n");
                hr=0;
                min=0;
                sec=0;
            }

                time(int h , int m , int s)
                    {
                        printf("\n-------time(int,int,int)---------\n");
                        hr=h;
                        min=m;
                        sec=s;
                    }


                            void initialtime()
                                {
                                    hr = 0;
                                    min =  0;
                                    sec = 0;

                                }


                                        void accepttime()
                                            {
                                                printf("\nEnter the time:");
                                                scanf("%d%d%d",&hr,&min,&sec);
                                            }

                                                    void printtime()
                                                        {
                                                            printf(" %d : %d : %d\n",hr,min,sec);
                                                        }

//                                                                 ~time()
//                                                                 {
//                                                                     printf("\n--------(~time())-----------\n");
//                                                                 }
};
int main()
{
    time t1;
    printf("\nTime T1 =");
        t1.printtime();
        
            time t2;
            t2.accepttime();
                printf("\nTime T2 =");
                    t2.printtime();

                time classin(8,45,30);
                    printf("\nClass In Time =");
                        classin.printtime();

                    time classout(1,15,10);
                        printf("\nClass out Time  =");
                            classout.printtime();

    return 0;
}