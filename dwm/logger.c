/* Open and close the file for each operation
 * Avoiding any potential problems caused by forgetting to free pointers
 * Also simplify usage, at the cost of boilerplate execution
 * i.e +safer, +slower, +easier
 */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "logger.h"

//Internal function
int openlog();
int closelog();

enum {
    LOGNAME_LIMIT = 256
};


enum statuscode {
    ERROR = -1,
    OPEN,
    NONE
};

static FILE * logfile;
static int logstatus = NONE;
static char logname[LOGNAME_LIMIT];


void
setlog(char *lname)
{
    strncpy(logname, lname, LOGNAME_LIMIT);
    logname[LOGNAME_LIMIT - 1] = '\0'; //string library is shit, won't necessarily end it in \0
    printf("logname set to: %s\n", logname);

    return;
}


//Formatted Printing
void 
logprint(char *format, ...)
{
    openlog();

    if (logstatus)
	return;

    va_list args;
    va_start(args, format);
    
    vfprintf(logfile, format, args);

    va_end(args);
    closelog();

    return;
}

void
clearlog()
{
    openlog();

    if (!(!logstatus && NULL != freopen(logname, "w", logfile)))
	logstatus = ERROR;

    closelog();

    return;
}

int 
openlog()
{
    logfile = fopen(logname, "a");

    logstatus = OPEN;

    if (NULL == logfile) {
	fprintf(stderr, "Error opening file, returned NULL");
	logstatus = ERROR;
    }

    return logstatus;
}

int closelog()
{
    if (OPEN != logstatus)
    {
	logstatus = ERROR;
	return logstatus;
    }

    fclose(logfile);
    logstatus = NONE;

    return logstatus;
}
