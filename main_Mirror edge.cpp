/*
Mirror's Edge Trainer in C++
Sh0ck : www.shocknsl.com
Xylitol : http://xylitol.tapz.eu
RED Team : www.redcrew.net

thx: Krust
*/


#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



void Color(int couleurDuTexte,int couleurDeFond) // Function colors.

{

        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);

}



int main()

{

// Introduction.

 

Color(15,0);

printf("                                                                л\n");

Color(12,0);

printf("   ллллллллллллллллллллллллл");

Color(15,0);

printf("  лл   лл л лллл  лллл  ллллл лллл п  ллллл\n");

Color(12,0);

printf("     ллллллллллллллллллллллл");

Color(15,0);

printf("  ллл ллл м л  лм л  лм л   л л  лм   л\n");

Color(12,0);

printf("       ллллллллллллллллллллл");

Color(15,0);

printf("  л ллл л л л   л л   л л   л л   л   л\n");

Color(12,0);

printf("         ллллллллллллллллллл");

Color(15,0);

printf("  л  л  л л л  лп л  лп л   л л  лп   лмммм\n");

Color(12,0);

printf("  л          ллллллллллллллл");

Color(15,0);

printf("  л     л л лллл  лллл  л   л лллл    ппппл\n");

Color(12,0);

printf("   лл             лллллллллл");

Color(15,0);

printf("  л     л л л лм  л лм  л   л л лм        л\n");

Color(12,0);

printf("     ллллллл          лллллл");

Color(15,0);

printf("  л     л л л  лм л  лм л   л л  лм       л\n");

Color(12,0);

printf("      ллллллллллл       лллл");

Color(15,0);

printf("  л     л л л   л л   л ллллл л   л   ллллл\n");

Color(12,0);

printf("       лллллллллллллллл     ");

Color(15,0);

printf("  \n");

Color(12,0);

printf("       лллллллллллллллллл   ");

Color(15,0);

printf("  ллллллл лллл   лллллл  лллллл\n");

Color(12,0);

printf("            лллллл          ");

Color(15,0);

printf("  л       л  лл  л    л  л\n");

Color(12,0);

printf("             лллл   ллллллл ");

Color(15,0);

printf("  л       л   лл л    л  л\n");

Color(12,0);

printf("             лллл  ллллллллл");

Color(15,0);

printf("  лмммммм л    л л       лммммм\n");

Color(12,0);

printf("        ллл   лл   ллллллллл");

Color(15,0);

printf("  лпппппп л    л л   ллл лппппп\n");

Color(12,0);

printf("      лллллл  л   лллллллллл");

Color(15,0);

printf("  л       л   лл л    л  л\n");

Color(12,0);

printf("    ллллллллл    ллллллллллл");

Color(15,0);

printf("  л       л  лл  л    л  л\n");

Color(12,0);

printf("   ллллллллллл  лллллллллллл");

Color(15,0);

printf("  ллллллл лллл   лллллл  лллллл\n");

Color(12,0);

printf("   ллллллллллл ллллллллллллл");

Color(15,0);

printf("  +4 Trainer                            RED\n");

Color(15,0);

printf("  \n");

Color(10,0);

printf("                          PRESS ANY KEY TO CONTINUE\n\n");

system("PAUSE");

// End.



// Variables :)

HWND Wnd=0;      //Hwnd of the console game

LPDWORD PID;   //Process Id.

DWORD Proc=0;   //Thread ID.

char * Titre="Mirror's Edge +4 Trainer"; // Name of the window.

HANDLE Hproc;   // Handel of the process, (comme le handle des fichiers,...)

DWORD MWritte; // Variable for the numbers of bytes.



// Anti Ripping.

Wnd = FindWindow(NULL,"TrainerSpy XP + NT / 2000 / XP + Coded By BofeN");   // Search the window.

if(!Wnd){   // If not of window...

Color(12,0);

cout << "\n\n   ======== Mirror's Edge +4 Trainer -         Xylitol // RED ========\n\n" << endl;

Color(10,0);

}else{      // Else...

exit(EXIT_SUCCESS);

}

// End.



// ------------------------------ Gravity On -------------------------- //

DWORD Addr = 0x0C126A3; //Memory address.

BYTE PATCH[] = "\x90\x90\x90\x90\x90\x90\x90\x90"; // Notre Patch avec des bytes.



// ------------------------------ Gravity Off -------------------------- //

DWORD Addr2 = 0x0C126A3; //Memory address.

BYTE PATCH2[] = "\xF3\x0F\x11\x83\xF0\x00\x00\x00"; // Notre Patch avec des bytes.



// ------------------------------ Speed On -------------------------- //

DWORD Addr3 = 0x0404185; //Memory address.

BYTE PATCH3[] = "\x75\x25"; // Notre Patch avec des bytes.



// ------------------------------ Speed Off -------------------------- //

DWORD Addr4 = 0x0404185; //Memory address.

BYTE PATCH4[] = "\x74\x25"; // Notre Patch avec des bytes.



// ------------------------------ Slow On -------------------------- //

DWORD Addr5 = 0x0404154; //Memory address.

BYTE PATCH5[] = "\x74\x28"; // Notre Patch avec des bytes.



// ------------------------------ Slow Off -------------------------- //

DWORD Addr6 = 0x0404154; //Memory address.

BYTE PATCH6[] = "\x75\x28"; // Notre Patch avec des bytes.



// ------------------------------ Invulnerability On -------------------------- //

DWORD Addr7 = 0x01262F0C; //Memory address.

BYTE PATCH7[] = "\xC7\x80\xB8\x02\x00\x00\x64\x00\x00\x00"; // Notre Patch avec des bytes.

DWORD Addr8 = 0x01262F16; //Memory address.

BYTE PATCH8[] = "\x90"; // Notre Patch avec des bytes.

DWORD Addr9 = 0x01262F17; //Memory address.

BYTE PATCH9[] = "\x90"; // Notre Patch avec des bytes.

DWORD Addr10 = 0x01262F18; //Memory address.

BYTE PATCH10[] = "\x90"; // Notre Patch avec des bytes.



// ------------------------------ Invulnerability Off -------------------------- //

DWORD Addr11 = 0x01262F0C; //Memory address.

BYTE PATCH11[] = "\x83\xB8\xB8\x02\x00\x00\x64"; // Notre Patch avec des bytes.

DWORD Addr12 = 0x01262F13; //Memory address.

BYTE PATCH12[] = "\x0F\x8D\xED\x01\x00\x00"; // Notre Patch avec des bytes.



// Initialisation of the software.

SetConsoleTitle(Titre); // Set the title of the window.



long choice;

menu:

   cout << "1. Gravity On\n" << endl;

   cout << "2. Gravity Off\n" << endl;

   cout << "3. Speed On\n" << endl;

   cout << "4. Speed Off\n" << endl;

   cout << "5. Slow On\n" << endl;

   cout << "6. Slow Off\n" << endl;

   cout << "7. Invulnerability On\n" << endl;

   cout << "8. Invulnerability Off\n" << endl;

   cout << "\nYour Choice ? " << endl;

   scanf("%ld", &choice);

 

   printf("\n");

   

  switch (choice)

   {

      case 1:

      // ------------------------------ Gravity On -------------------------- //

        // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr, PATCH, 8,&MWritte)){

         cout << "Gravity Enabled !\n\n" << endl;

       }

         system("pause");

         cout << "\n\n" << endl;

         goto menu;

         break;

      // --------------------------------------- END ------------------------------------- //

      case 2:

      // ------------------------------ Gravity Off -------------------------- //

      // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr2, PATCH2, 8,&MWritte)){

         cout << "Gravity Disabled !\n\n" << endl;

       }

         system("pause");

         cout << "\n\n" << endl;

         goto menu;

         break;

      // --------------------------------------- END ------------------------------------- //

      case 3:

      // ------------------------------ Speed On -------------------------- //

      // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr3, PATCH3, 2,&MWritte)){

         cout << "Speed Enabled !\n\n" << endl;

       }

         system("pause");

         cout << "\n\n" << endl;

         goto menu;

      break;

      // --------------------------------------- END ------------------------------------- //

      case 4:

      // ------------------------------ Speed Off -------------------------- //

      // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr4, PATCH4, 2,&MWritte)){

         cout << "Speed Disabled !\n\n" << endl;

       }

         system("pause");

         cout << "\n\n" << endl;

         goto menu;

      break;

      // --------------------------------------- END ------------------------------------- //

      case 5:

      // ------------------------------ Slow On -------------------------- //

      // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr5, PATCH5, 2,&MWritte)){

         cout << "Slow Enabled !\n\n" << endl;

       }

         system("pause");

         cout << "\n\n" << endl;

         goto menu;

      break;

      // --------------------------------------- END ------------------------------------- //

      case 6:

      // ------------------------------ Slow Off -------------------------- //

      // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr6, PATCH6, 2,&MWritte)){

         cout << "Slow Disabled !\n\n" << endl;

       }

         system("pause");

         cout << "\n\n" << endl;

         goto menu;

      break;

      // --------------------------------------- END ------------------------------------- //

      case 7:

      // ------------------------------ Invulnerability On -------------------------- //

      // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr7, PATCH7, 10,&MWritte)){

         // Multi patch.

         WriteProcessMemory (Hproc, (LPVOID)Addr8, PATCH8, 1,&MWritte);

         WriteProcessMemory (Hproc, (LPVOID)Addr9, PATCH9, 1,&MWritte);

         WriteProcessMemory (Hproc, (LPVOID)Addr10, PATCH10, 1,&MWritte);

         cout << "Invulnerability On !\n\n" << endl;

       }

         system("pause");

         cout << "\n\n" << endl;

         goto menu;

      break;

      // --------------------------------------- END ------------------------------------- //

      case 8:

      // ------------------------------ Invulnerability Off -------------------------- //

      // Begin of the instructions while.

       Wnd = FindWindow(NULL,"Mirror's Edge?");

       if(!Wnd){

       Color(12,0);

       cout << "\n[-] Game not Found :(\n--> Run Mirror Edge.exe First !!!" << endl;

       Color(10,0);

       }else{

       cout << "\n[+] Game Found ! :)\n--> Finding Process ID..." << endl;

       Proc= GetWindowThreadProcessId(Wnd,(LPDWORD) &PID);

       }

       if(Proc){

       cout << "[+] Process Id found : " << PID << " On Thread ID : "<< Proc << "\n--> Opening Process..." << endl;

       Hproc= OpenProcess(PROCESS_ALL_ACCESS,NULL,(DWORD)PID);

       }

       if(WriteProcessMemory (Hproc, (LPVOID)Addr11, PATCH11, 7,&MWritte)){

         WriteProcessMemory (Hproc, (LPVOID)Addr12, PATCH12, 6,&MWritte);

         cout << "Invulnerability Off !\n\n" << endl;

       }

         cout << "pause" << endl;

         cout << "\n\n" << endl;

         goto menu;

      break;

      // --------------------------------------- END ------------------------------------- //

      default:

      Color(12,0);

      cout << "Retype your choice !" << endl;

      Color(10,0);

      cout << "\n\n" << endl;

      goto menu;

      break;

   }

   cout << "\n\n" << endl;

 

  system("PAUSE");

}
