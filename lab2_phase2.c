#include <sys/types.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "common.h"

#define FORM_FEED_CHAR          '\f'
#define MAX_FILE_NAME_LENGTH    32
#define MAX_SOURCE_LINE_LENGTH  256
#define MAX_PRINT_LINE_LENGTH   80
#define MAX_LINES_PER_PAGE      50
#define DATE_STRING_LENGTH      26

static void print_page_header(char source_name[], char date[])
{
    static int page_number = 0;

    /* Missing Code Here */
}

void print_line(char line[], char source_name_to_print[], char date_to_print[])
{
    char save_ch;
    char *save_chp = NULL;
    static int line_count = MAX_LINES_PER_PAGE;

    if (++line_count > MAX_LINES_PER_PAGE)
    {
        /* Missing Code Here */
    }
    if (strlen(line) > MAX_PRINT_LINE_LENGTH)
    {
        /* Missing Code Here */
    }
    if (save_chp)
    {
        /* Missing Code Here */
    }
    /* Missing Code Here */
    if (save_chp)
    {
        /* Missing Code Here */
    }
}

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];

   /* Missing Code Here */
    return 0;
}

FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;
    FILE *file;

    /* Missing Code Here */
    return file;
}

BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;

    if (1) //This is missing a condition
    {
                /*  Missing Code Here */
        return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}
typedef enum {
    FALSE, TRUE,
}BOOLEAN;

FILE *init_lister(const char *, char source_file_name[], char dte[]);
BOOLEAN get_source_line(FILE *, char src_name[], char todays_date[]);
void print_line(char *, char source_name[], char date_to_print[]);

#endif
