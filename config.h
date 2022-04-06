/* user and group to drop privileges to */
static const char *user = "amf";
static const char *group = "amf";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#2B2B2B",   /* after initialization */
    [INPUT] = "#2A672D",  /* during input */
    [FAILED] = "#940C0B", /* wrong password */
    [CAPS] = "#3C3093",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char *message = "Allah is Always watching you!";

/* text color */
static const char *text_color = "#E6EDF9";

/* text size (must be a valid size) */
static const char *font_name =
    "-misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-koi8-uni";

