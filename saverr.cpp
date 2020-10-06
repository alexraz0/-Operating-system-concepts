#include <cstdlib>
#include <iostream>

#include <sys/nman.h>
#include <sys/stat/h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

using std::cout;
using std::cerr;
using std::endl;

const auto REGION_SIZE = 4096;
const auto REGION_NAME = argv[1];
const auto REGION_PERMS = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

int main(int argc, char *argv[])
{
  if(arg < 4 )
    {
      cerr<< "Usage: "<< argv[0] << "FILE PROG [ARGS] ... " << endl;
      return EXIT_FAILURE;
    }
 
  
  auto fd = shm_open(REGION_NAME, O_CREAT | O_RDWR, REGION_PERMS);
  if (fd < 0) 
  {
    perror("shm_open");
    return EXIT_FAILURE;
  }
  
  auto ok = ftruncate(fd, REGION_SIZE);
  if(ok < 0)
  {
    perror("ftruncate");
    return EXIT_FAILURE;
  }
  
  void *ptr = mmap(NULL,REGION_SIZE, PROT_READ, MAP_SHARED, fd, 0);
  if(ptr == MAP_FAILED)
  {
    perror("mmap");
    return EXIT_FAILURE;
  }
  
  dup2(output, STDERR_FILENO)
    
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
     }
  }
  
  
 
