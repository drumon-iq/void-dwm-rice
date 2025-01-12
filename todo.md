# TODO

## Index

[ - [ ] Rice every component](#Rice-Apps-List)

[ - [x] DWM quit menu](#DWM-quit)

[ - [0%] DWM custom bar](#Bar)

[ - [x] Toggleable themes](#Theme)

[ - [x] ST switch light/dark mode](#ST-darkmode)

---

### DWM-quit  

 Change quit function to execute the dmenu exit script (dont actually use bash script)

### Bar

 Tag text, bottom centralized, hide vacant tags, toggle, option to show applications
 status text at top (hidden by default, toggle and hold capability), show clickable sys info
 Windows title, at windows top

 - [x] Hide Vacant tags
 - [ ] Remove status and title from main bar
 - [ ] Centralize tag bar
 - [ ] Extra bar (status)
 - [ ] Titles? (no idea)
 
### Theme  

 Light/Dark theme, switch through keybind
 
 - [x] Solarized light/dark
 - [x] Function to switch
   * Idea: function to switch changes commands, keybinds, wallpaper, runs commands, runs functions, changes color scheme, all configurable inside config.h, so it must be able to take a argument and make all those functions
   - [x] Able to switch theme
   - [-] Able to switch spawn commands (for color maybe)
   - [-] Able to run any number of functions (with arguments)
   - [-] Able to run any number of commands (literally just spawn tho)
   * Won't add a way to configure toggletheme through arguments, just changing the function code itself, the abstraction seems unnecessary at the moment  
 - [x] ST changing theme
 - [x] DMENU changing theme
 - [x] Quit menu changing theme
 - [x] Bar changing theme
 - [x] Clients border's changing theme

### ST-darkmode  

 Different color schemes (change through argument)

## Rice-Apps-List

 - [ ] DWM
   - [9] Colorschemes
   - [ ] Bar
   - [ ] Layouts
   - [ ] Shortcuts and Keybinds
   - [ ] Widgets
 - [ ] ST
   - [x] Colorschemes
   - [7] Scrollback
 - [ ] DMENU
   - [ ] Layouts
   - [ ] Positions
   - [ ] Scripts
 - [ ] NEOVIM
   - [ ] Colorscheme
   - [ ] LSP
 - [ ] TMUX
   - [ ] Make it pretty
   - [ ] Sane keybinds (they are currently insane)
 - [ ] RANGER
   - [ ] Images and files preview
   - [ ] Sane keybinds
   - [ ] Proper rifle config
