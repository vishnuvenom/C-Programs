// Removing blank lines from palyers.txt using linked list

#include <stdio.h>
#define  FILENAME  "c:\\classroom\\players.txt"

struct node {
  char name[30];
  struct node * next;
};

main()
{
   FILE * fp;
   char * p, name[30];
   struct node * current, *prev, * root = NULL;

      fp = fopen(FILENAME,"rt");
      while(1)
      {
          p = fgets(name, 30, fp); // read a line from file
          if(p == NULL)  // EOF
            break;

          // Ignore blank line
          if( strlen(name) <= 1)
               continue;

          // Allocate memory for a node
          current = (struct node *) malloc(sizeof(struct node));
          current->next = NULL;
          strcpy(current->name, name);

          if (root == NULL)
               root = current;
          else
               prev -> next = current;

          prev = current;
      }

      fclose(fp);

      printf("Read lines into linked list\n");

      // Write all non-blank lines back to file

      fp = fopen(FILENAME,"wt");
      current = root;
      while (current != NULL)
      {
          fputs(current->name,fp);
          current = current -> next;
      }

      fclose(fp);

      printf("Wrote non-blank lines back to file\n");
}
