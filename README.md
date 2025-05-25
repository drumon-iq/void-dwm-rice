# Void Ric'd

## - *No batteries included, no manual included, no screws either, it's actually missing pieces*

 * *I will no longer be updating this repo. Below there is an index of some of the ideas for changes I have organized into a list, and won't be completed for any forseen future, neither do I have any intentions of fixing current bugs and misbehaviours of this setup. It is archieved to help explain to other people why have I spent months holed up in a room(work proof).*

---

[A bit of what I learned](#Experience)
[TLDR from experience](#TLDR)

 * *todo list*

[ - [ ] Rice every component](#Rice-Apps-List)

[ - [x] DWM quit menu](#DWM-quit)

[ - [98%] DWM custom bar](#Bar)

[ - [x] Toggleable themes](#Theme)

[ - [x] ST switch light/dark mode](#ST-darkmode)

---

## Experience

  I would like to share a bit of my experience after using this setup for nearly half an year, some of the strong points and some reasons to seek something else.

 This is an very suckless based system, on other parts of the internet, people seem to generally agree that the suckless suite of software serves as an "minimalistic" alternative to more popular and """mainstream""" ways of using your computer, like the massive and robust KDE community and the enviroment created by their well integrated colletion of apps, the agreeable XFCE desktop enviroment, the weird and un-agreeable GNOME, meanwhile DWM is *just* the windows manager, nothing more, and to be honest, it just **barely** does it's job to manage windows. This is common to any software true to the suckless philosophy, and anyone who hasn't become comfortable using these kinds of apps is easily misled to believe it is meant for resource freaks who would rather seclude themselves from anything useful and feature-rich and spend countless sleepless nights reinventing the wheel than to have an computer that spends 1GB of ram on standby. Though I wouldn't disagree that does make for some of the userbase.

  The bothersome way of adding new features or customizing suckless software makes it a deterrent for new users, having to read C code and manually apply patches to have some decently working setup is quite scary, I'm not kidding, but it slowly forces out of you the skills of a tinkerer, someone who's not only proeficient with their tools, but possesses enough theorical knowlegde to understand how it works up to being able to rebuild it, creativity and flexibility to change the workspace to suit new demands, and confidence in how to use it.

  And in no way that is special to DWM, DWM is not special, no new features, no monthly releases, only, it is very convenient when looking to learn how something works, and using something flexible to potentially cover any use case, it is only a little over 2K lines of code, trivial to read through.

  I've also learned that some communities are better off small, keeping it small and elitist is just awesome, it means that all you're going to find are people who are genuinely interested in a topic, it is a kind of filter, a filter of effort, the rewards from getting expertize in a topic usually don't match the amount of effort put in the better you get at it.

### TLDR: 
  
  Suckless software does in fact sucks. It forces you to understand how it works and learn way more than the necessary to daily drive it, but sometimes that's a good thing.
  I'm probably changing to awesomewm and kitty, I ain't coding ALL that myself, seloko-num-compensa.com

---

### DWM-quit  

 Change quit function to execute the dmenu exit script (dont actually use bash script)

### Bar

 Tag text, bottom centralized, hide vacant tags, toggle, option to show applications
 status text at top (hidden by default, toggle and hold capability), show clickable sys info
 Windows title, at windows top

 - [x] Hide Vacant tags
 - [x] Remove status and title from main bar
 - [x] Centralize tag bar
 - [x] Extra bar (status)
 - [?] Titles? (no idea)

 > Title currently sits at left of the tag bar, may stay there or not
 
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

 - [40%] DWM
   - [x] Colorschemes
   - [x] Bar
   - [ ] Layouts
   - [ ] Shortcuts and Keybinds
   - [ ] Widgets
 - [ ] ST
   - [x] Colorschemes
   - [7] Scrollback
 - [ ] DMENU
   - [ ] Layouts
   - [ ] Positions
   - [1/?] Scripts
 - [100%] NEOVIM
   - [X] Colorscheme
   - [X] LSP
 - [ABANDONED] TMUX
   - [-] Make it pretty
   - [-] Sane keybinds (they are currently insane)
 - [ ] RANGER
   - [ ] Images and files preview
   - [ ] Sane keybinds
   - [ ] Proper rifle config
