#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ftpserver.h"

int main(int argc, char**argv)
{
    struct FtpServer *s = (struct FtpServer*) malloc(sizeof(struct FtpServer));
    if(!s) return -1;

    s->_port = 21;
    strcpy(s->_relative_path, "/");
    
    //show_log("log");
    
    init_ftp_server(s);

    start_ftp_server(s);

    //close_ftp_server(s);

    return 0;
}
