# TODO

## Index

[ - [x] DWM quit menu](DWM quit)
[ - [0%] DWM custom bar](Bar)
[ - [Almost Done] Toggleable themes](Theme)
[ - [x] ST switch light/dark mode](ST darkmode)

---

### DWM quit  

    Change quit function to execute the dmenu exit script (dont actually use bash script)

### Bar

      Tag text, bottom centralized, hide vacant tags, toggle, option to show applications
      status text at top (hidden by default, toggle and hold capability), show clickable sys info
      Windows title, at windows top
 
      - [ ] Separate every bar piece
      - [ ] Tag bar at bottom
      - [ ] Status bar at top
      - [ ] Title bar at every client top
 
      - [ ] Tag bar:  
        - [ ] Toggleable
        - [ ] Hide Vacant tags
        - [ ] List applications per tag
 
      - [ ] Status bar:  
        - [ ] Toggleable (hidden by default)
        - [ ] "Holdable"
        - [ ] Separate by blocks ( clickable, lauch widget)
 
      - [ ] Title bar:
        - [ ] At Client top
        - [ ] Hidden by default

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
   - [ ] DMENU changing theme
   - [x] Quit menu changing theme
   - [x] Bar changing theme
   - [x] Clients border's changing theme

### ST darkmode  

    Different color schemes (change through argument)
