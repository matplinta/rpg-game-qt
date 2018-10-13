********************
Gold Map version 1.3
********************

This program is for editing Maps, Events, Wild Pokémon in
Pokémon Gold and silver. All towns works with Crystal if
you first load tilesets from English Gold or Silver rom.

********
Contents
********
1: Requirements
2: Instructions
3: How to add tileset, map, event, rom option or wild
Pokémon
4: Credits

************
Requirements
************
CPU:
300Mhz or more is recommended. Tileset
loading speed depends on CPU speed. At 450MHz
loading one tileset takes about 5 seconds.

Memory:
At least 16MB. 64MB or more is recommended because
DirectX drivers and graphics needs much memory.

Software:
Windows95,Windows98 or Windows ME and
DirectX7 but DirectX8 is recommended. DirectX can be
downloaded from www.microsoft.com/DirectX. This doesn't
work on Windows NT because NT doens't supports only
DirectX4

************
Instructions
************
First you need to load Pokémon Gold or Silver rom from
File/Load... then select category of map and map then it
starts loading tileset what map uses. It needs to be done
only once. You can save from File/Save it will overwrite
file you opened or you can save into diffrent file from
File/Save As...

Map editor:
Select building block from right of the map. You can
place block whrere you want on the map or if you keep
left mouse button pressed you can draw with that block
it's useful when you need to paint big areas with same
block.

Event Editor:
Events are things what makes something happen in game.On Events
tab there's Event editor it will show events of map
you've loaded. Events will be shown only if there's
event data for loaded map in Event.ini. Gold Map supports warps,
singposts and peoples. You can place events by dragging
(move cursor on event and keep left button pressed and drag
event where you want).

Warps:
Warps are things what takes you places when you walk on
the warp. Warps are shown as "W" on Event Editor.

Singposts:
Singpost's are thins that show text when you face at
singpost and press A button. Hidden items that can be
found using itemfinder are stored as singpost. Singposts
are shown as "S" on Event Editor.

Peoples:
Normal peoples, trainers, berrytrees and itemballs are
shown as "P" on Event Editor. Some people are hidden by default
and other shown. If you check hidden box you can define when
people will be shown or if it's shown by default you can define
when it will be hidden.

Wild Pokémon Editor:
Wild Pokémon editor allows you to change what Pokémon
attacks in grass. Wild Pokémons will be shown only if
there's wild pokémon data added for loaded map in
Pokémons.ini.

Block editor:
Block editor is in Utilies/Block Editor... It allows
you to edit Blocks. First choose Block you want to
edit from left. then select tile and click on Block.
When you're done click Save.

Rom Options:
Allows you to change some thing in game.

Visible Start Menu Options:
Allows you to change what options are hidden. There needs to be
at least one option visible or else it will crash game.

Make All Marts Free:
Makes all marts totally free!!!!!

Build Events:
Allows you to change how many events there are. If event data
is for map banks last(there's 000000... after it) you can
add there as many events as you like without making bugs.

Save map/Load Map:
Allows you to load/save map,events,pokemons into small
single file. It's useful when you change event settings
and then you want them back but you don't remeber them.
When you save map you shouldn't load it to other map
unless map is same sized and same number of events like
most houses,Pokecenters and marts. 

***************************************************
How to add tileset, map, event, rom option or wild
***************************************************
Pokémon
*******
There are files Tilesets.ini, Maps.ini, Events.ini,
Pokémons.ini and Options.ini in Gold Map folder.
You can edit those files with notepad. Maps.ini contains
map locations, map's X and Y size and wich tileset it
uses. Events.ini contains event locations, number of
events and people aligment. People's X and Y coordinates
starts at diffrent number than they are shown. New Bark
Town People's coordinates starts at 4. That means that
if there's an event in coordinates Y:5 X:3 it's
coordinates are stored in rom like this 09,07.
Options.ini contains options that will be shown in
Utilies/Rom Options... Pokémons.ini contains wild Pokémon
data locations. When you add map don't forget to put it's
name in Main.ini below right category.

Map:
[Map name]
Start offset=$ Map's first block location
End offset=$ Map's last block location
X size= Map's block width
Y size= Map's block height
Comment=Comment
Tileset=Wich tileset map uses

Event:
[Map name]
Warps=How many warps
Warp offset=$ Location of first warp
Singposts= How many singposts
Singpost offset=$ Location of first singpost
Peoples= How many peoples(Normal,trainer,berrytree,Item)
People aligment=Increase of people's coordinates(I think
this is always 4, but I'm not sure)
People offset=$ Location of first people

Rom Option:
[Option Name]
Offset=$ Byte Location
Default value=$ Normal value(When option is unchecked)
Changed value=$ Changed value(When option is checked)

Wild Pokémon:
[Map name]
Start offset=$ Where wild Pokémon data starts

*******
Credits
*******
This program is done by Jigglypuff

Thanks to:
Philip Reuben for helping me with events and warps!
CoolBoyMan for finding many maps and wild pokemon locations!
Calle for finding some maps.
Romhacker for finding some maps.

This program is freeware you can distribute this program
freely.