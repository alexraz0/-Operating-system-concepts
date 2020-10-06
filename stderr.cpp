#include <cstdlib>
#include <iostream>

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include <stdio.h>
#include <fcnt1.h>

#define _GNU_SOURCE

using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char *argv[])
{
    if(arg < 4 ) 
    {
      cerr<< "Usage: "<< argv[0] << "FILE PROG [ARGS] ... " << endl;
      return EXIT_FAILURE;
    }
      
    
    int output = open(argv[1], 0_RDWR);
    
    if (output < 0) 
    {
          output = o_creat(argv[1],mode);
          
          dup2(output, STDERR_FILENO) /
          if (output < 0) 
          {
            perror(" FILE NOT CREATED" )
            return EXIT_FAILURE;
          }
    }
     
     
     auto child_pid = fork();
     if (child_pid < 0) 
     {
        perror("fork");
        return EXIT_FAILURE;
     }
       
       
     if (child_pid == 0)
     {
        execvp(argv[2], argv+2)
     }
     
     else
     {
        int status;
        auto ok = wait(&status);
        if (ok < 0)
        {
            perror("wait");
            return EXIT_FAILURE;
        }
      
      close(output);
      return EXIT_SUCCESS;
     
      
}


