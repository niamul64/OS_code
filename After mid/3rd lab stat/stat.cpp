//id: 17201026
#include<stdio.h>
#include<sys/stat.h>
#include <unistd.h>
#include<sys/types.h>

int main()
{

  struct stat buf;


  stat("file.txt", &buf);


  printf("size in bytes: %d\n", buf.st_size);
  printf("file type: %o\n", buf.st_mode);

  printf("ID of device containing file: %d\n", buf.st_dev);
  printf("Inode number: %d\n", buf.st_ino);
  printf("Number of hard links: %d\n", buf.st_nlink);
  printf("User Id of owner: %d\n", buf.st_uid);
  printf("group id of owner: %d\n", buf.st_gid);
  printf("device id: %d\n", buf.st_rdev);
  printf("block size for file system i/o: %d\n", buf.st_blksize);
  printf("Number of 512B blocks allocated: %d\n", buf.st_blocks);

  return 0;
}
