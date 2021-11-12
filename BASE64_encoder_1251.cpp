/*Base64 is a method of encoding arbitrary binary data into ASCII text using Cyrillic letters*/
#include "Encoder1251cyr.h"
int main()
{
    string sstr = bin(readLine());
    string frase64 = bin_to_base64(sstr);
    prnt_l(frase64);
    return 0;
}
