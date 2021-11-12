/*Base64 is a method of encoding arbitrary binary data into ASCII text using Cyrillic letters*/
#include "Encoder1251cyr.h"
int main()
{
    string sstr = bin(readLine());
    string frase64 = bin_to_base64(sstr);
    prnt_l(frase64);
    return 0;
}

/*
cd D:/VLAD/C++/practicum.yandex/lessons_g++/BASE64_encoder_1251/BASE64_encoder_1251

git remote add BASE64_encoder_1251 https://github.com/valdislaf/BASE64_encoder_1251.git
git push BASE64_encoder_1251
git remote rm BASE64_encoder_1251
*/