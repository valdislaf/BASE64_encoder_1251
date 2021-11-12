#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
void prnt_l(string str)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << str << endl;
}
void prnt(string str)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << str << " "s;
}
void prnt_l_hex(int str)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << hex << str << endl;
}
wstring readLine()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
setlocale(LC_ALL, "Russian");
wstring s;
getline(wcin, s);
return s;
}
string char_to_bin(const wchar_t& ch0)
{
    const int x = ch0;
    string sstr = "";
    for (int i = sizeof(x) * 2 - 1; i >= 0; --i)
    {
        sstr += to_string((int)((x >> i) & 1));
    }

    return sstr;
}

string char_to_bin_rus(const wchar_t& ch0)
{
    const int x = ch0;
    string sstr = "";
    for (int i = sizeof(x) * 3 - 1; i >= 0; --i)
    {
        sstr += to_string((int)((x >> i) & 1));
    }

    return sstr;
}




string bin(const wstring& strk)
{
    string sstr = "";
    for (int i = 0; i < strk.length(); i++)
    {
        if (strk[i] > 1039) {
            string sstr0 = char_to_bin_rus(strk[i]);
            string sstr0_new;
            sstr0_new += '1';
            sstr0_new += '1';
            for (int k = 0; k < sstr0.length(); k++)
            {
                auto a = sstr0[k];
                sstr0_new += sstr0[k];
                if (k == 5)
                {
                    sstr0_new += '1';
                    sstr0_new += '0';
                }
            }
            sstr += sstr0_new;
        }
        else { sstr += char_to_bin(strk[i]); }
    }
    return sstr;
}

string bin_to_base64(const string& sstr)
{
    wstring arr = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
    int l = sstr.length();
    int razmer = l / 6;
    int ost = l % 6;
    string result_str = "";
    for (int k = 0; k < razmer; k++)
    {
        string word = "";
        for (int i = 0; i < 6; i++)
        {
            word += sstr[i + 6 * k];
        }
        result_str += arr[stoi(word, nullptr, 2)];
    }

    if (ost != 0) {
        string word = "";

        for (int i = 0; i < ost; i++)
        {
            word += sstr[i + 6 * razmer];
        }
        for (int i = ost; i < 6; i++)
        {
            word += '0';
        }
        result_str += arr[stoi(word, nullptr, 2)];
    }
    result_str += arr[64];
    result_str += arr[64];
    return result_str;
}