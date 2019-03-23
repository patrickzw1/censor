# *censor*
* A file that takes any number of one-word string as an argument.<br>
* Take a _.txt_ file as second argument.<br>
* Function changes the one-word first argument and searchs words in .txt file then change them to "CENSORED"<br>
## *Example*
```
$ cat poem.txt
```
shows the inside of text file:

    Said Hamlet to Ophelia,<br>
    I'll draw a sketch of thee,<br>
    What kind of pencil shall I use?<br>
    2B or not 2B?<br>
    
```
$ ./censor Ophelia < poem.txt
```
shows the inside of poem.txt: 

    Said Hamlet to CENSORED,<br>
    I'll draw a sketch of thee,<br>
    What kind of pencil shall I use?<br>
    2B or not 2B?<br>
