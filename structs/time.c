
struct time
{
 int hours, mins, secs;
};

int total_seconds(struct time t)
{
    return  t.hours * 3600 + t.mins * 60 + t.secs;
}

struct time max(struct time t1, struct time t2)
{
    int totsec1 = total_seconds(t1);
    int totsec2 = total_seconds(t2);
    return  totsec1 > totsec2 ? t1 : t2;
}

// Returns 0 if t1 and t2 are equal, > 0 if t1 > t2, < 0 if t1 < t2
int compare_times(struct time t1, struct time t2)
{
   return total_seconds(t1) - total_seconds(t2);
}

main()
{
 struct time t1 = {17,30,5};  // Initialize structure variable
 struct time t2;
 struct time t3 = {20,20,30};

   t2 = t1; // assignment between two variables

   printf("%d\n", compare_times(t1,t3));

   // printf("%02d:%02d:%02d", t1.hours, t1.mins, t1.secs);


   t2 = max(t1,t3);
   printf("\n%02d:%02d:%02d", t2.hours, t2.mins, t2.secs);

}

