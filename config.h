/* user and group to drop privileges to */
static const char *user = "amf";
static const char *group = "amf";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#2B2B2B",   /* after initialization */
    [INPUT] = "#38CF3E",  /* during input */
    [FAILED] = "#B40E0D", /* wrong password */
    [CAPS] = "#887FCF",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char *message = "Allah is Always watching you!";

/* text color */
static const char *text_color = "#E6EDF9";

/* text size (must be a valid size) */
static const char *font_name =
    "-monotype-notosansmono nerd font-thin-r-normal--0-0-0-0-p-0-iso8859-16";
