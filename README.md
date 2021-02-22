- Version: 1.23 / 1311.12 - for 'script_mp_rel'!

- Updated Hashnames to 01/13/2021 from alloc8or´s Hashlist for 'script_rel' & 'script_mp_rel'!

![](https://s12.directupload.net/images/200508/asvg4ni3.png)

------------

Since begin this Project, i need to put any changes from alloc8or´s natives.json manually into my one because using the natives.json from him by default will break the Decompiler.
All i do is, copy the new Hashnames and replace them in my list, so only the names got update on my list not the Values and comments but for the Decompiler is only needed the Hashlist. therefore i removed any other things from my list.

Example:
```c
alloc8or:
"0x550F05CFFBD63C8C": {
"name": "_SET_GAME_LOGIC_PAUSED",
"comment": "Note: this native was added in build 1232.56",
"params": [],
"return_type": "void",
"build": "1232"
},
My List:
"0x550F05CFFBD63C8C": {
"name": "_SET_GAME_LOGIC_PAUSED"
},
```

To know what each native do, use the Online Native-DB from him. -> [Red Dead Redemption 2 Native DB](https://alloc8or.re/rdr3/nativedb/)

Note, that i wait some days bevor i update the Decopiled files to the current Hashnames.

------------

Thanks to https://github.com/gottfriedleibniz for the Decompiler.

Thanks to https://github.com/alloc8or for the natives.json Updates of RDRII