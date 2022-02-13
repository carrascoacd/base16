# Base16

Arduno Base16 library that provides the ability of encoding ASCII text to hexadecimal and decoding hexadecimal to ASCII text.

## Installation
You can include the library from the Library Manager or just download it as ZIP and include it from source as ZIP library.

## How to use it

```c
const char input[] = "{\"app\": \"Hello World!\"}";
char output[strlen(input) * 2];

ASCIItoHex(input, output);
```

```c
const char input[] = "7B22617070223A202248656C6C6F20576F726C6421227D";
char output[strlen(input) / 2];

hexToASCII(input, output);
```

Please, check the `/tests` for more info about how to use the library.

## How to run the tests
Under the `/tests` directory you will find all the `.ino` files that can be uploaded in Arduino as usual.