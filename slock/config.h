/* user and group to drop privileges to */
static const char *user  = "qfira";
static const char *group = "qfira";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#fdf6e3",   /* during input */
	[FAILED] = "#002b36",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
