/* user and group to drop privileges to */
static const char *user = "amf";
static const char *group = "amf";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#2B2B2B",   /* after initialization */
    [INPUT] = "#009D06",  /* during input */
    [FAILED] = "#940C0B", /* wrong password */
    [CAPS] = "#3C3093",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "/home/amf/.config/grub.jpg";

/* default message */
static const char *message = "Allah is Always watching you!";

/* text color */
static const char *text_color = "#E6EDF9";

/* text size (must be a valid size) */
static const char *font_name =
    "-misc-open sans extrabold-extrabold-r-normal--0-0-0-0-p-0-koi8-uni";

