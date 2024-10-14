#ifndef config_def_h_INCLUDED
#define config_def_h_INCLUDED

#define DEFAULT_FONT "Sans 14"
#define DEFAULT_ROUNDING 5
static const int transparency = 255;

struct clr_scheme schemes[] = {
{
  /* colors for main keys */
  .bg = {.bgra = {27, 17, 17, transparency}}, //Mocha Crust
  .fg = {.bgra = {37, 24, 24, transparency}}, //Mocha Mantle
  .high = {.bgra = {46, 30, 30, transparency}}, //Mocha Base
  .swipe = {.bgra = {46, 30, 30, 64}}, //Mocha Base
  .text = {.bgra = {244, 214, 205, transparency}}, //Mocha Text
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* colors for external perimeter keys*/
  .fg = {.bgra = {68, 50, 49, transparency}}, //Mocha Surface0
  .high = {.bgra = {90, 71, 69, transparency}}, //Mocha Surface1
  .swipe = {.bgra = {90, 71, 69, 64}}, //Mocha Surface1
  .text = {.bgra = {244, 214, 205, transparency}}, //Mocha Text
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* color for enter button */
  .fg = {.bgra = {132, 130, 231, transparency}}, //Frappe Red
  .high = {.bgra = {156, 153, 234, transparency}},//Frappe Maroon
  .swipe = {.bgra = {156, 153, 234, 64}},//Frappe Maroon
  .text = {.bgra = {27, 17, 17, transparency}}, //Mocha Crust
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* color for arrow keys */
  .fg = {.bgra = {250, 180, 137, transparency}}, //Mocha Blue
  .high = {.bgra = {236, 199, 116, transparency}}, //Mocha Sapphire
  .swipe = {.bgra = {236, 199, 116, 64}}, //Mocha Sapphire
  .text = {.bgra = {27, 17, 17, transparency}}, //Mocha Crust
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* color for additional layouts buttons */
  .fg = {.bgra = {27, 17, 17, transparency}}, //Mocha Crust
  .high = {.bgra = {46, 30, 30, transparency}}, //Mocha Base
  .swipe = {.bgra = {46, 30, 30, 64}}, //Mocha Base
  .text = {.bgra = {244, 214, 205, transparency}}, //Mocha Text
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* color for super button */
  .fg = {.bgra = {239, 57, 136, transparency}}, //Frappe Muave
  .high = {.bgra = {203, 118, 234, transparency}}, //Frappe Pink
  .swipe = {.bgra = {203, 118, 234, 64}}, //Frappe Pink
  .text = {.bgra = {27, 17, 17, transparency}}, //Mocha Crust
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* color for escape button (this is just to increase the font size) */
  .fg = {.bgra = {68, 50, 49, transparency}}, //Mocha Surface0
  .high = {.bgra = {90, 71, 69, transparency}}, //Mocha Surface1
  .swipe = {.bgra = {90, 71, 69, 64}}, //Mocha Surface1
  .text = {.bgra = {244, 214, 205, transparency}}, //Mocha Text
  .font = "Sans 20",
  .rounding = DEFAULT_ROUNDING,
}
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
  Full, // First layout is the default layout on startup
  Special, 
  NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
  Landscape, // First layout is the default layout on startup
  LandscapeSpecial,
  NumLayouts // signals the last item, may not be omitted
};

#endif // config_def_h_INCLUDED
