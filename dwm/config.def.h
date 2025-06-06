/* Crediting
 * I have not made this theme, 
 * the color selection and details can be found below:
 * https://www.zovirl.com/2011/07/22/solarized_cheat_sheet/
 * http://ethanschoonover.com/solarized
 *
 * The original config comes from ethan

"#657b83"	sol_base00   //Light Foreground Primary
"#93a1a1"	sol_base1    //Light Foreground Secundary
"#586e75"	sol_base01   //Light Foreground Highlight
"#fdf6e3"	sol_base3    //Light Background
"#eee8d5"	sol_base2    //Light Background Highlight 
         	
"#839496"	sol_base0    //Dark Foreground Primary
"#586e75"	sol_base01   //Dark Foreground Secundary
"#93a1a1"	sol_base1    //Dark Foreground Highlight
"#002b36"	sol_base03   //Dark Background
"#073642"	sol_base02   //Dark Background Highlight 
         	
"#b58900"	sol_yellow  
"#cb4b16"	sol_orange  
"#dc322f"	sol_red	    
"#d33682"	sol_magenta 
"#6c71c4"	sol_violet  
"#268bd2"	sol_blue    
"#2aa198"	sol_cyan    
"#859900"	sol_green   

*/
/* See LICENSE file for copyright and license details. */
/* appearance */
static const unsigned int borderpx  = 3;        /* border pixel of windows */
static const int startwithgaps[]    = { 1 };	/* 1 means gaps are used by default, this can be customized for each tag */
static const unsigned int gappx[]   = { 8 };   /* default gap between windows in pixels, this can be customized for each tag */
static const unsigned int snap      = 32;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 0;        /* 0 means bottom bar */
static const int defaulttheme	    = 0;	/* Default Theme */
static const char *fonts[]          = { "VictorMonoNerdFont-Regular:size=16" };
static const char dmenufont[]       = "VictorMonoNerdFont-Regular:size=16";

static const char *themes[][2][3] = {
	/*			 fg,	    bg,	       border*/
	/* solarized light */
	{
		[SchemeNorm] = { "#657b83", "#fdf6e3", "#fdf6e3" },
		[SchemeSel]  = { "#eee8d5", "#586e75", "#cb4b16" },
	},
	/* solarized dark */
	{
		[SchemeNorm] = { "#839496", "#002b36", "#002b36" },
		[SchemeSel]  = { "#073642", "#93a1a1", "#268bd2" },
	}
};

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Gimp",     NULL,       NULL,       0,            1,           -1 },
	{ "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { 
    "dmenu_launcher",
    "-m", dmenumon,
    "-fn", dmenufont,
    "-nb", "#fdf6e3",
    "-nf", "#657b83",
    "-sb", "#eee8d5",
    "-sf", "#586e75", 
    NULL };
static const char *dmenu_run[] = { 
    "dmenu_run",
    "-m", dmenumon,
    "-fn", dmenufont,
    "-nb", "#fdf6e3",
    "-nf", "#657b83",
    "-sb", "#eee8d5",
    "-sf", "#586e75", 
    NULL };
static const char *termcmd[]  = { "st", NULL, NULL };
/* Scripts for shortcuts */
static const char *ranger[]  = { "st", "-e", "ranger", NULL };
static const char *raiseVolume[]  = { "amixer", "set", "Master", "5%+", NULL };
static const char *lowerVolume[]  = { "amixer", "set", "Master", "5%-", NULL };
static const char *raiseBrightness[] = { "xbacklight", "-inc", "5", NULL };
static const char *lowerBrightness[] = { "xbacklight", "-dec", "5", NULL };

static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_o,      spawn,          {.v = ranger} },
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_p,      spawn,          {.v = dmenu_run } },
	{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },
	{ 0,	          XF86XK_AudioLowerVolume, spawn,	   {.v = lowerVolume} },
	{ 0,		  XF86XK_AudioRaiseVolume, spawn,	   {.v = raiseVolume} },
	{ 0,               XF86XK_MonBrightnessUp, spawn,	   {.v = raiseBrightness} },
	{ 0,              XF86XK_MonBrightnessDown, spawn,	   {.v = lowerBrightness} },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_Return, zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
	{ MODKEY,			XK_c,      toggletheme,	   {.i = 1} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	//{ MODKEY,                       XK_minus,  setgaps,        {.i = -5 } },
	//{ MODKEY,                       XK_equal,  setgaps,        {.i = +5 } },
	//{ MODKEY|ShiftMask,             XK_minus,  setgaps,        {.i = GAP_RESET } },
	//{ MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = GAP_TOGGLE} },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_q,      quit,	   {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

