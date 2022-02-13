int hexDigit(char c)
{
  if (c >= '0' && c <= '9')
    return c - '0';

  if (c >= 'A' && c <= 'F')
    return c - 'A' + 10;

  if (c >= 'a' && c <= 'f')
    return c - 'a' + 10;

  return 0;
}

void ASCIItoHex(const char *input, char *output){
    int inputIndex = 0;
    int outputIndex = 0;

    while(input[inputIndex] != '\0')
    {
        sprintf((char*)(output+outputIndex),"%02X", input[inputIndex]);
        input++;
        outputIndex+=2;
    }

    output[outputIndex++] = '\0';
}

// 30 = 3×16^1+0×16^0 = 48 = '0' character
void hexToASCII(const char *input, char *output){
  int outputIndex = 0;
  
  for (unsigned int inputIndex = 0; inputIndex < strlen(input); inputIndex += 2){
    output[outputIndex] = (char)(hexDigit(input[inputIndex]) * 16 + hexDigit(input[inputIndex+1]));
    outputIndex++;
  }
  
   output[outputIndex++] = '\0';
}
