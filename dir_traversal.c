//
// Created by yirat on 4.8.2020.
//

#define _XOPEN_SOURCE 500
#include <ftw.h>
#include <stdio.h>
#include <stdlib.h>

// max num of sub dirs
#define MAXLEVEL  2

static int display_info(const char *fpath, const struct stat *sb, int tflag, struct FTW *ftwbuf){
    //If the file type is symbolic link, we do not want to print it
    if(tflag==FTW_SL) return 0;
    // if the depth is above the max sub dirs, continue to next file
    if (ftwbuf->level > MAXLEVEL) {
        return 0;
    }
    printf("%-3s %ld %s\n",
           (tflag == FTW_D) ?   "D"   : (tflag == FTW_DNR) ? "DNR" :
           (tflag == FTW_DP) ?  "DP"  : (tflag == FTW_F) ?   "F" :
           (tflag == FTW_NS) ?  "NS"  : "???",
            sb->st_ino,
            fpath + ftwbuf->base);
    // To tell nftw() to continue
    return 0;
}

int main(int argc, char *argv[]){
    if (nftw((argc < 2) ? "." : argv[1], display_info, 20, FTW_PHYS) == -1) {
        perror("nftw");
        exit(EXIT_FAILURE);
    }
    exit(EXIT_SUCCESS);
}

