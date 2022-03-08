```
❯ cat lyrics.txt
Rocknroll is right
Silence is wrong
A guitar is a six-string
Tommy's been down
Music is a billboard-burning razzmatazz!
Listen to the music
If the music is a guitar
Say "Keep on rocking!"
Listen to the rhythm
If the rhythm without Music is nothing
Tommy is rockin guitar
Shout Tommy!
Music is amazing sensation
Jamming is awesome presence
Scream Music!
Scream Jamming!
Tommy is playing rock
Scream Tommy!
They are dazzled audiences
Shout it!
Rock is electric heaven
Scream it!
Tommy is jukebox god
Say it!
Break it down

❯ cat test
Rocknroll = True                # Rocknroll is right
Silence   = False               # Silence is wrong
A guitar  = 136                 # A guitar is a six-string
Tommy     = 44                  # Tommy's been down
Music     = 1970                # Music is a billboard-burning razzmatazz!
music     = input()             # Listen to the music
if music == 136:                # If the music is a guitar
    print "Keep on rocking!"    # Say "Keep on rocking!"
rhytem    = input()             # Listen to the rhythm
if rhytem - 1970 == 0:          # If the rhythm without Music is nothing
    Tommy = 66                  # Tommy is rockin guitar
print Tommy                     # Shout Tommy!
Music = 79                      # Music is amazing sensation
Jamming = 78                    # Jamming is awesome presence
print Music                     # Scream Music!
print Jamming                   # Scream Jamming!
Tommy = 74                      # Tommy is playing rock
print Tommy                     # Scream Tommy!
They = 79                       # They are dazzled audiences
print They                      # Shout it!
Rock = 86                       # Rock is electric heaven
print Rock                      # Scream it!
Tommy = 73                      # Tommy is jukebox god
print Tommy                     # Say it!
                                # Break it down
                                # Shout "Bring on the rock!"
                                # Else Whisper "That ain't it, Chief"

❯ python3
Python 3.10.2 (main, Jan 15 2022, 19:56:27) [GCC 11.1.0] on linux
Type "help", "copyright", "credits" or "license" for more information.

>>> r = [66, 79, 78, 74, 79, 86, 73]

>>> print(''.join(map(chr, r)))
**BONJOVI**

>>> exit()

**picoCTF{BONJOVI}**
```