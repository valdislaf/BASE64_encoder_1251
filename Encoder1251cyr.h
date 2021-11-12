#pragma once
#ifndef Encoder1251cyr_h
#define Encoder1251cyr_h
#include <string>
using namespace std;
void prnt(string str);
void prnt_l(string str);
void prnt_l_hex(int str);
string char_to_bin(const wchar_t& ch0);
string char_to_bin_rus(const wchar_t& ch0);
string bin(const wstring& strk);
string bin_to_base64(const string& sstr);
wstring readLine();
#endif

