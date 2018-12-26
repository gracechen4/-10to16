# How do strings work in C? (Or really everything)

Every string is a character array.

So let's say I have a string like ```""```.

|0|
|:---:|
|'\0'|

Or another string like ```"ask adfe"```

|0|1|2|3|4|5|6|7|8|
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
|'a'|'s'|'k'|' '|'a'|'d'|'f'|'e'|'\0'|
