/* user and group to drop privileges to */
static const char *user  = "leonardson";
static const char *group = "leonardson";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#cc3333",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.8;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* message */
static const char * message = "Locked: Type password to enter :)";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * text_size = "fixed";
