/*This program is related to basic mathematical operations
This program is written by Harsh Murjani,
at Charusat University.
Student ID - 22TIT007 */

void main()
{
    //Variable Allocation//
    int pop, tlit, men, lmen, imen, wmn, lwmn, iwmn;

    //Value Allocation//
    pop=80000;
    tlit=pop*48/100;
    men=pop*52/100;
    lmen=pop*35/100;
    imen=men-lmen;
    wmn=pop-men;
    lwmn=tlit-lmen;
    iwmn=wmn-lwmn;
    
    //Output//
    printf ("------------------------------------------");
    printf ("\n|1|Total Population\t\t\t\t|%d|",pop);
    printf ("\n|2|Number of Literate(Men+Women)\t|%d|",tlit);
    printf ("\n|3|Number of Men\t\t\t\t|%d|",men);
    printf ("\n|4|Number of Literate Men\t\t|%d|",lmen);
    printf ("\n|5|Number of illiterate Men\t\t|%d|",imen);
    printf ("\n|6|Number of Women\t\t\t\t|%d|",wmn);
    printf ("\n|7|Number of Literate Women\t\t|%d|",lwmn);
    printf ("\n|8|Number of illiterate Women\t\t|%d|",iwmn);
    printf ("\n------------------------------------------");
}
