# *censor*
Thies is a file that takes any number of one-word string as argument.<br>
Then take a _.txt_ file as second argument.<br>
This function will change the one-word first argument and search those words in .txt file then change them to "CENSORED"<br>
# *Example*
```
$ cat poem.txt
```
Said Hamlet to Ophelia,<br>
I'll draw a sketch of thee,<br>
What kind of pencil shall I use?<br>
2B or not 2B?<br>
```
$ ./censor Ophelia < poem.txt
```
Said Hamlet to CENSORED,<br>
I'll draw a sketch of thee,<br>
What kind of pencil shall I use?<br>
2B or not 2B?<br>
