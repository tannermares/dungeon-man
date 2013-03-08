dungeon-man
===========

Thy Dungeon-man in C++
Walkthrough 

Spoiler warning: Plot or ending details follow. 

General Commands
================
HELP - repeats area description.
LOOK - repeats area description.
HELPETH - repeats area description.
DIE - "That wasn't very smart. Your score was: ___. Play again? [Y/N]" - Subtracts 100 points from your score.
DANCE - "Thou shaketh it a little, and it feeleth all right." 
GET YE ___/TAKE YE ___/GET YON ___/TAKE YON ___/GET ___/ TAKE ___ - "Thou cannotst get that. Quit making stuffeth up!" 
GET DAGGER - "Yeah, okay." - Adds 25 points to your score. Usable infinitely. 
GO ___ - "Thou cannotst go there. Who do you think thou art? A magistrate?!" 
LOOK ___ - "It looketh pretty awesome." 
___ - "That does not computeth. Type HELP is thou needs of it." 
TALK ___ - "Who is ___? Your new boyfriend? Somebody from work you don't want me to meeteth?" 
GIVE ___ - "Thou don'tst have a ___ to give. Go back to your tiny life." 
SMELL/SNIFF - "You smell a Wumpus." 

Main Dungeon Room
=================
"Thy Dungeonman - Click to enter yon dungeon." 
THY DUNGEONMAN 
 YOU ARE THY DUNGEONMAN! 
Ye find yeself in yon dungeon. Ye see a SCROLL. Behind ye scroll is a FLASK. Obvious exits are NORTH, SOUTH and DENNIS." 
If you've asked to get the scroll more than once, anytime you look at the room (either by typing "LOOK", "HELP", or by returning to this room from another room, you'll see this message tacked onto the main message: "There is definitely no YE SCROLL, so drop it." 
LOOK SCROLL - "Parchment, definitely parchment. I'd recognize it anywhere." 
LOOK FLASK - "Looks like you could quaff some serious mead out of that thing." 
GET SCROLL - "Ye takes the scroll and reads of it. It doth say: BEWARE, READER OF THE SCROLL, DANGER AWAITS TO THE- The SCROLL disappears in thy hands with ye olde ZAP!" - Adds 2 points to your score 
GET SCROLL (again) - "Ye doth suffer from memory loss. YE SCROLL is no more. Honestly." - Subtracts 1 point from your score 
LOOK SCROLL (again) - "Ye seeth nothing wheretofore it went ZAP." 
GET FLASK (first two times) - "Ye cannot get the FLASK. It is firmly bolted to a wall which is bolted to the rest of the dungeon which is probably bolted to a castle. Never you mind." - Adds 1 point to your score each time 
GET FLASK (third time) - "Okay, okay. You unbolt yon FLASK and hold it aloft. A great shaking begins. The dungeon ceiling collapses down on you, crushing you in twain. Apparently, this was a load-bearing FLASK. Your score was: ___ Play again? [Y/N]" - Subtracts 1000 points from your score 
GO NORTH - Takes you north (see below). 
GO SOUTH - Takes you south (see below). 
GO DENNIS - Takes you to Dennis (see below). 

North of the Main Dungeon Room
==============================
"You go NORTH through yon corrider. You arrive at parapets. Ye see a rope. Obvious exits are SOUTH." 
LOOK PARAPETS - "Well, they're parapets. This much we know for sure." 
LOOK ROPE - "It looks okay. You've seen better." 
GET ROPE - "You attempt to take ye ROPE but alas it is enchanted! It glows a mustard red and smells like a public privy. The ROPE wraps round your neck and hangs you from parapets. With your last breath, you wonder what parapets are. GAME OVER. Your score was:__. Play again? (Y/N)" - Subtracts 1 point from your score 
GO SOUTH - Takes you back to Main Dungeon Room. 

South of the Main Dungeon Room
==============================
"You head south to an enbankment. Or maybe a chasm. You can't decide which. Anyway, ye spies a TRINKET. Obvious exits are NORTH." 
LOOK TRINKET - "Quit looking! Just get it already." 
LOOK/HELP (Before GET TRINKET) - "Ye stand yeself close to a yet-unnamed escarpment. Nonetheless, ye spies a TRINKET. Obvious exits are NORTH." 
GET TRINKET - "Ye getsts yon TRINKET and discover it to be a bauble. You rejoice at your good fortune. You shove the TRINKET in your pouchel. It kinda hurts." - Adds 2 points to your score 
LOOK/HELP (After GET TRINKET) - "Ye stand high above a canyon-like depression. Obvious exits are NORTH." 
LOOK TRINKET (After you GET it) - "Just a bulge in thou pouchel at thist point." 
GET TRINKET (After you GET it) - "Sigh. The trinket is in thou pouchel. Recallest thou?" - Subtracts 1 point from your score 
LOOK/HELP (After you try to GET TRINKET more than once) - "Thou hangeth out at an overlook. Obvious exits are NORTH. I shouldn't have to tell ye there is no TRINKET." 
GO NORTH - Takes you back to the Main Dungeon Room. 

Dennis
======
"Ye arrive at Dennis. He wears a sporty frock coat and a long jimberjam. He paces about nervously. Obvious exits are NOT DENNIS." 
NOT DENNIS - Takes you back to the Main Dungeon Room. 
TALK - "You engage Dennis in leisurely discussion. Ye learns that his jimberjam was purchased on sale at a discount market and that he enjoys pacing about nervously. You become bored and begin thinking about parapets." 
LOOK DENNIS - "That jimberjam really makes the outfit." 
LOOK JIMBERJAM - "Man, that art a nice jimberjam." 
GIVE TRINKET (or GIVE TRINKET TO DENNIS) - "A novel idea! You givst the TRINKET to Dennis and he happily agrees to tell you what parapets are. With this new knowledge, ye escapes from yon dungeon in order to search for new dungeons and to remain... THY DUNGEONMAN!! You hath won! Congraturation!! Your score was: ___" 
GIVE TRINKET (without actually having the TRINKET) - "Thou don'tst have a trinket to give. Go back to your tiny life." 
