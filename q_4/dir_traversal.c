//
// Created by yirat on 4.8.2020.
//

#define _XOPEN_SOURCE 500
#include <ftw.h>
#include <stdio.h>
#include <stdlib.h>

////This function prints the details on the file.
static int display_info(const char *fpath, const struct stat *sb, int tflag, struct FTW *ftwbuf){
    //If the file type is symbolic link, we do not want to print it
    if(tflag==FTW_SL) return 0;

    //Print the file type, inode and file name.
    printf("%-3s %ld %s\n",
           (tflag == FTW_D) ?   "D"   : (tflag == FTW_DNR) ? "DNR" :
           (tflag == FTW_DP) ?  "DP"  : (tflag == FTW_F) ?   "F" :
           (tflag == FTW_NS) ?  "NS"  : "???",
            sb->st_ino,
            fpath + ftwbuf->base);

    return 0;                            // To tell nftw() to continue
}

/**
 * @param argc - need to be 2. The user enter the path of directory.
 * @param argv - contains the path of directory.
 */
int main(int argc, char *argv[]){
    //This function goes through all the files in the directory sent in the argument and handles each file according to the display_info function.
    if (nftw((argc < 2) ? "." : argv[1], display_info, 20, FTW_PHYS) == -1) {
        perror("nftw");
        exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
}

